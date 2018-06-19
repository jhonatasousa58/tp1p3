#include "stubs.h"


// Definições de método da classe stub do controlador da lógica de negócio de autenticação.
Resultado StubSAutenticacao::autenticar(Email &email, Senha &senha) throw(runtime_error) {

    // Apresentar dados recebidos.

    cout << endl << "StubSAutenticacao::autenticar" << endl ;
    string res = email.getEmail();
    cout << "Email = " << res << endl ;
    cout << "Senha = " << senha.getSenha() << endl ;

    ResultadoAutenticacao resultado;

    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    else if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }
    return resultado;
}

Resultado StubSUsuario::mostrar(Email &email) throw(runtime_error){
    string res = email.getEmail();
    if(res == Tleitor){
        cout << "Dados de Usuario Leitor" << endl;
        cout << "Nome: Joao" << endl;
        cout << "Sobrenome: Silva" << endl;
        cout << "Email: leitor@leitor.com" << endl;
    }
    else if(res == Tdesenvolvedor){
        cout << "Dados de Usuario Desenvolvedor" << endl;
        cout << "Nome: Joao" << endl;
        cout << "Sobrenome: Silva" << endl;
        cout << "Data de Nascimento: 22/05/2018" << endl;
        cout << "Email: dev@dev.com" << endl;
    }
    else{
        cout << "Dados de Usuario Administrador" << endl;
        cout << "Nome: Joao" << endl;
        cout << "Sobrenome: Silva" << endl;
        cout << "Telefone: 61 91234-5678" << endl;
        cout << "Data de Nascimento: 22/05/2018" << endl;
        cout << "Endereco: UnB Darcy Ribeiro" << endl;
        cout << "Email: leitor@leitor.com" << endl;
    }
}

Resultado StubSUsuario::editar(Email &email) throw(runtime_error){
    cout << endl << "StubSUsuario::Editar" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = email.getEmail();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSUsuario::excluir(Email &email) throw(runtime_error){
    // Apresentar dados recebidos.

    cout << endl << "StubSUsuario::remover" << endl ;
    cout << "Removendo: " << email.getEmail() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = email.getEmail();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSCadastro::cadastrarAdministrador(Administrador &adm) throw(runtime_error){
    cout << endl << "StubSCadastro::cadastrarAdministrador" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = adm.get_Email();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSCadastro::cadastrarLeitor(Leitor &leitor) throw(runtime_error){
    cout << endl << "StubSCadastro::cadastrarLeitor" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = leitor.get_Email();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSCadastro::cadastrarDesenvolverdor(Desenvolvedor &dev) throw(runtime_error){
    cout << endl << "StubSCadastro::cadastrarDesenvolverdor" << endl ;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = dev.get_Email();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::criarT(Termo &termo) throw(runtime_error){
    cout << endl << "StubSVocabulario::criarT" << endl ;
    cout << "Criando Termo:" << endl;
    cout << "Nome: " << termo.get_Nome() << endl;
    cout << "Classe Termo: " << termo.get_ClasseTermo() << endl;
    cout << "Data: " << termo.get_Data() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = termo.get_Nome();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::editarT(Termo &termo) throw(runtime_error){
    cout << endl << "StubSVocabulario::editarT" << endl ;
    cout << "Termo Editado: " << endl;
    cout << "Nome: " << termo.get_Nome() << endl;
    cout << "Classe Termo: " << termo.get_ClasseTermo() << endl;
    cout << "Data: " << termo.get_Data() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = termo.get_Nome();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::excluirT(Nome &nome) throw(runtime_error){
    cout << endl << "StubSVocabulario::excluirT" << endl ;
    cout << "Termo Excluido: " << endl;
    cout << "Nome: " << nome.getNome() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = nome.getNome();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::criarD(Definicao &def) throw(runtime_error){
    cout << endl << "StubSVocabulario::criarD" << endl ;
    cout << "Criando Definicao:" << endl;
    cout << "Texto: " << def.get_Texto() << endl;
    cout << "Data: " << def.get_Data() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = def.get_Texto();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::editarD(Definicao &def) throw(runtime_error){
    cout << endl << "StubSVocabulario::editarD" << endl ;
    cout << "Editando Definicao:" << endl;
    cout << "Texto: " << def.get_Texto() << endl;
    cout << "Data: " << def.get_Data() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = def.get_Texto();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::excluirD(Texto &texto) throw(runtime_error){
    cout << endl << "StubSVocabulario::excluirD" << endl ;
    cout << "Definicao Excluido: " << endl;
    cout << "Texto: " << texto.getTexto() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = texto.getTexto();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::criarV(VocabularioControlado &voc, Definicao &def) throw(runtime_error){
    cout << endl << "StubSVocabulario::criarV" << endl ;
    cout << "Criando Vocabulario:" << endl;
    cout << "Nome: " << voc.get_Nome() << endl;
    cout << "Idioma: " << voc.get_Idioma() << endl;
    cout << "Data: " << voc.get_Data() << endl;
    cout << "Texto: " << def.get_Texto() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = voc.get_Nome();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::editarV(VocabularioControlado &voc, Definicao &def) throw(runtime_error){
    cout << endl << "StubSVocabulario::editarV" << endl ;
    cout << "Editando Vocabulario:" << endl;
    cout << "Nome: " << voc.get_Nome() << endl;
    cout << "Idioma: " << voc.get_Idioma() << endl;
    cout << "Data: " << voc.get_Data() << endl;
    cout << "Texto: " << def.get_Texto() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = voc.get_Nome();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}

Resultado StubSVocabulario::excluirV(Nome &nome) throw(runtime_error){
    cout << endl << "StubSVocabulario::excluirV" << endl ;
    cout << "Vocabulario Excluido: " << endl;
    cout << "Nome: " << nome.getNome() << endl;

    Resultado resultado;

    resultado.setValor(Resultado::SUCESSO);

    // Diferentes comportamentos dependendo do valor da matrícula.
    string res = nome.getNome();
    if(res == Tfalha){
        resultado.setValor(ResultadoAutenticacao::FALHA);
    }
    if(res == Terro_sistema){
        throw runtime_error("Erro de sistema");
    }else{
        resultado.setValor(ResultadoAutenticacao::SUCESSO);
    }

    return resultado;
}
