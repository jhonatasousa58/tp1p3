//---------------------------------------------------------------------------

#ifndef UnidadePersistenciaH
#define UnidadePersistenciaH
//---------------------------------------------------------------------------

#include "dominios.h"
#include "entidades.h"
#include <list>

// Posteriomente remover.

#include <iostream>
#include <conio.h>
#include <string>
#include <stdio.h>

#include "sqlite3.h"

using namespace std;

//---------------------------------------------------------------------------
//Classe EErroPersistencia.

class EErroPersistencia {
private:
        string mensagem;
public:
        EErroPersistencia(string);
        string what();
};

//---------------------------------------------------------------------------
//Classe ElementoResultado.

class ElementoResultado {
private:
        string nomeColuna;
        string valorColuna;
public:
        void setNomeColuna(const string&);
        string getNomeColuna() const;
        void setValorColuna(const string&);
        string getValorColuna() const;
};

//---------------------------------------------------------------------------
//Classe ComandoSQL.

class ComandoSQL {
private:
        const char *nomeBancoDados;
        sqlite3 *bd;
        char *mensagem;
        int rc;
        void conectar() throw (EErroPersistencia);
        void desconectar() throw (EErroPersistencia);
        static int callback(void *, int, char **, char **);

protected:
        static list<ElementoResultado> listaResultado;
        string comandoSQL;
public:
        ComandoSQL() {
             //Informa o nome do banco de dados.
             nomeBancoDados = "bancodedados.db";
        }
        void executar() throw (EErroPersistencia);
};

class ComandoLerSenha:public ComandoSQL {
public:
        ComandoLerSenha(Email);
        string getResultado() throw (EErroPersistencia);
};

class ComandoTipoUsuario:public ComandoSQL {
public:
        ComandoTipoUsuario(Email);
        string getResultado() throw (EErroPersistencia);
};

class ComandoCadastrarLeitor:public ComandoSQL{
public:
    ComandoCadastrarLeitor(Leitor);
};

class ComandoEditarLeitor:public ComandoSQL{
public:
    ComandoEditarLeitor(Leitor);
};

class ComandoCadastrarAdministrador:public ComandoSQL{
public:
    ComandoCadastrarAdministrador(Administrador);
};

class ComandoEditarAdministrador:public ComandoSQL{
public:
    ComandoEditarAdministrador(Administrador);
};

class ComandoCadastrarDesenvolvedor:public ComandoSQL{
public:
    ComandoCadastrarDesenvolvedor(Desenvolvedor);
};

class ComandoEditarDesenvolvedor:public ComandoSQL{
public:
    ComandoEditarDesenvolvedor(Desenvolvedor);
};

class ComandoRemoverConta:public ComandoSQL{
public:
    ComandoRemoverConta(Email);
};

inline string ElementoResultado::getNomeColuna() const {
        return nomeColuna;
}

inline string ElementoResultado::getValorColuna() const {
        return valorColuna;
}

#endif
