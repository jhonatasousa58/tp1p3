//---------------------------------------------------------------------------
#include "UnidadePersistencia.h"

//Atributo estático container List.

list<ElementoResultado> ComandoSQL::listaResultado;

//---------------------------------------------------------------------------
//Classe ErroPersistencia.

EErroPersistencia::EErroPersistencia(string mensagem){
        this->mensagem = mensagem;
}

string EErroPersistencia::what() {
        return mensagem;
}

//---------------------------------------------------------------------------
//Classe ElementoResultado.

void ElementoResultado::setNomeColuna(const string& nomeColuna) {
        this->nomeColuna = nomeColuna;
}

void ElementoResultado::setValorColuna(const string& valorColuna){
        this->valorColuna = valorColuna;
}


//---------------------------------------------------------------------------
//Classe ComandoSQL.

void ComandoSQL::conectar() throw (EErroPersistencia) {
      rc = sqlite3_open(nomeBancoDados, &bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na conexao ao banco de dados");
}

void ComandoSQL::desconectar() throw (EErroPersistencia) {
      rc =  sqlite3_close(bd);
      if( rc != SQLITE_OK )
        throw EErroPersistencia("Erro na desconexao ao banco de dados");
}

void ComandoSQL::executar() throw (EErroPersistencia) {
        conectar();
        rc = sqlite3_exec(bd, comandoSQL.c_str(), callback, 0, &mensagem);
        if(rc != SQLITE_OK){
                if (mensagem)
                        free(mensagem);
                throw EErroPersistencia("Erro na execucao do comando SQL");
        }
        desconectar();
}

int ComandoSQL::callback(void *NotUsed, int argc, char **valorColuna, char **nomeColuna){
      NotUsed=0;
      ElementoResultado elemento;
      int i;
      for(i=0; i<argc; i++){
        elemento.setNomeColuna(nomeColuna[i]);
        elemento.setValorColuna(valorColuna[i] ? valorColuna[i]: "NULL");
        listaResultado.push_front(elemento);
      }
      return 0;
}

ComandoLerSenha::ComandoLerSenha(Email email) {
        comandoSQL = "SELECT senha FROM Usuarios WHERE email = ";
        comandoSQL += "'" + email.getEmail() + "';";
}

string ComandoLerSenha::getResultado() throw (EErroPersistencia) {
        ElementoResultado resultado;
        string senha;
        //Remover senha;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        senha = resultado.getValorColuna();

        return senha;
}

ComandoTipoUsuario::ComandoTipoUsuario(Email email) {
        comandoSQL = "SELECT tipo FROM Usuarios WHERE email = ";
        comandoSQL += "'" + email.getEmail() + "';";
}

ComandoRemoverConta::ComandoRemoverConta(Email email){
        comandoSQL = "DELETE FROM Usuarios WHERE email = ";
        comandoSQL += "'" + email.getEmail() + "';";
}

string ComandoTipoUsuario::getResultado() throw (EErroPersistencia) {
        ElementoResultado resultado;
        string tipo;
        if (listaResultado.empty())
                throw EErroPersistencia("Lista de resultados vazia.");
        resultado = listaResultado.back();
        listaResultado.pop_back();
        tipo = resultado.getValorColuna();

        return tipo;
}

ComandoCadastrarLeitor::ComandoCadastrarLeitor(Leitor leitor) {
        comandoSQL = "INSERT INTO Usuarios (nome, sobrenome, email, senha, tipo) VALUES (";
        comandoSQL += "'" + leitor.get_Nome() + "', ";
        comandoSQL += "'" + leitor.get_Sobrenome() + "', ";
        comandoSQL += "'" + leitor.get_Email() + "', ";
        comandoSQL += "'" + leitor.get_Senha() + "', ";
        comandoSQL += "'Leitor')";
}
ComandoEditarLeitor::ComandoEditarLeitor(Leitor leitor) {
        comandoSQL = "UPDATE Usuarios ";
        comandoSQL += "SET nome = '" + leitor.get_Nome();
        comandoSQL += "', sobrenome = '" + leitor.get_Sobrenome();
        comandoSQL += "', senha = '" + leitor.get_Senha();
        comandoSQL += "' WHERE email = '" + leitor.get_Email() + "';";
}

ComandoCadastrarDesenvolvedor::ComandoCadastrarDesenvolvedor(Desenvolvedor dev) {
        comandoSQL = "INSERT INTO Usuarios (nome, sobrenome, datanasc, email, senha, tipo) VALUES (";
        comandoSQL += "'" + dev.get_Nome() + "', ";
        comandoSQL += "'" + dev.get_Sobrenome() + "', ";
        comandoSQL += "'" + dev.get_Data() + "', ";
        comandoSQL += "'" + dev.get_Email() + "', ";
        comandoSQL += "'" + dev.get_Senha() + "', ";
        comandoSQL += "'Desenvolvedor')";
}
ComandoEditarDesenvolvedor::ComandoEditarDesenvolvedor(Desenvolvedor dev) {
        comandoSQL = "UPDATE Usuarios ";
        comandoSQL += "SET nome = '" + dev.get_Nome();
        comandoSQL += "', sobrenome = '" + dev.get_Sobrenome();
        comandoSQL += "', senha = '" + dev.get_Senha();
        comandoSQL += "', datanasc = '" + dev.get_Data();
        comandoSQL += "' WHERE email = '" + dev.get_Email() + "';";
}
ComandoCadastrarAdministrador::ComandoCadastrarAdministrador(Administrador adm) {
        comandoSQL = "INSERT INTO Usuarios (nome, sobrenome, telefone, datanasc, endereco, email, senha, tipo) VALUES (";
        comandoSQL += "'" + adm.get_Nome() + "', ";
        comandoSQL += "'" + adm.get_Sobrenome() + "', ";
        comandoSQL += "'" + adm.get_Telefone() + "', ";
        comandoSQL += "'" + adm.get_Data() + "', ";
        comandoSQL += "'" + adm.get_Endereco() + "', ";
        comandoSQL += "'" + adm.get_Email() + "', ";
        comandoSQL += "'" + adm.get_Senha() + "', ";
        comandoSQL += "'Administrador'";
}
ComandoEditarAdministrador::ComandoEditarAdministrador(Administrador adm) {
        comandoSQL = "UPDATE Usuarios ";
        comandoSQL += "SET nome =      '" + adm.get_Nome();
        comandoSQL += "', sobrenome =  '" + adm.get_Sobrenome();
        comandoSQL += "', senha =      '" + adm.get_Senha();
        comandoSQL += "', datanasc = '" + adm.get_Data();
        comandoSQL += "', telefone =   '" + adm.get_Telefone();
        comandoSQL += "', endereco =   '" + adm.get_Endereco();
        comandoSQL += "' WHERE email = '" + adm.get_Email() + "';";
}
