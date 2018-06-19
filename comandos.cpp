#include "comandos.h"

void ComandoIACadastroLeitor::executar(ISCadastro* cntrSCadastro) throw(runtime_error){
    Leitor leitor;
    Resultado resultado;

    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;

    while(true){
        try{
            string entrada;
            cout << "Digite Nome: " << endl;
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite Sobrenome: " << endl;
            cin >> entrada;
            sobrenome.setSobrenome(entrada);
            cout << "Digite Email: " << endl;
            cin >> entrada;
            email.setEmail(entrada);
            cout << "Digite Senha: " << endl;
            cin >> entrada;
            senha.setSenha(entrada);

            leitor.set_Nome(nome);
            leitor.set_Sobrenome(sobrenome);
            leitor.set_Email(email);
            leitor.set_Senha(senha);
            break;
        }
        catch(invalid_argument &exp){
                        cout << "formato incorreto" << endl;
        }
    }

    resultado = cntrSCadastro->cadastrarLeitor(leitor);
    if(resultado.getValor() == Resultado::SUCESSO){
         cout <<"Sucesso na execucao da operacao" << endl<<endl <<"Leitor Cadastrado: "<<endl;
         cout <<"Nome      :   "<<leitor.get_Nome()<<endl;
         cout <<"Sobrenome :   "<<leitor.get_Sobrenome()<<endl;
         cout <<"Email     :   "<<leitor.get_Email()<<endl;

    }
    else {
        cout << "Usuario ja cadastrado!" << endl;
    }
}

void ComandoIACadastroAdm::executar(ISCadastro* cntrSCadastro) throw(runtime_error){
    Administrador adm;
    Resultado resultado;

    Nome nome;
    Sobrenome sobrenome;
    Telefone telefone;
    Data data;
    Endereco endereco;
    Email email;
    Senha senha;

    while(true){
        try{
            string entrada;
            cout << "Digite Nome: " << endl;
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite Sobrenome: " << endl;
            cin >> entrada;
            sobrenome.setSobrenome(entrada);
            cout << "Digite Telefone: " << endl;
            cin >> entrada;
            telefone.setTelefone(entrada);
            cout << "Digite Data: " << endl;
            cin >> entrada;
            data.setData(entrada);
            cout << "Digite Endereco: " << endl;
            cin >> entrada;
            endereco.setEndereco(entrada);
            cout << "Digite Email: " << endl;
            cin >> entrada;
            email.setEmail(entrada);
            cout << "Digite Senha: " << endl;
            cin >> entrada;
            senha.setSenha(entrada);

            adm.set_Nome(nome);
            adm.set_Sobrenome(sobrenome);
            adm.set_Telefone(telefone);
            adm.set_Data(data);
            adm.set_Endereco(endereco);
            adm.set_Email(email);
            adm.set_Senha(senha);
            break;
        }
        catch(invalid_argument &exp){
                        cout << "formato incorreto" << endl;
        }
    }

    resultado = cntrSCadastro->cadastrarAdministrador(adm);
    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }

}

void ComandoIACadastroDev::executar(ISCadastro* cntrSCadastro) throw(runtime_error){
    Desenvolvedor dev;
    Resultado resultado;

    Nome nome;
    Sobrenome sobrenome;
    Telefone telefone;
    Data data;
    Endereco endereco;
    Email email;
    Senha senha;

    while(true){
        try{
            string entrada;
            cout << "Digite Nome: " << endl;
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite Sobrenome: " << endl;
            cin >> entrada;
            sobrenome.setSobrenome(entrada);
            cout << "Digite Data: " << endl;
            cin >> entrada;
            data.setData(entrada);
            cout << "Digite Email: " << endl;
            cin >> entrada;
            email.setEmail(entrada);
            cout << "Digite Senha: " << endl;
            cin >> entrada;
            senha.setSenha(entrada);

            dev.set_Nome(nome);
            dev.set_Sobrenome(sobrenome);
            dev.set_Data(data);
            dev.set_Email(email);
            dev.set_Senha(senha);
            break;
        }
        catch(invalid_argument &exp){
                        cout << "formato incorreto" << endl;
        }
    }

    resultado = cntrSCadastro->cadastrarDesenvolverdor(dev);
    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAUsuarioMostrar::executar(ISUsuario* cntrSUsuario) throw(runtime_error){
    cout << "Exibindo dados do usuario" << endl;
    Email email;
    cntrSUsuario->mostrar(email);
}

void ComandoIAUsuarioEditar::executar(ISUsuario* cntrSUsuario) throw(runtime_error){
Leitor leitor;
    Resultado resultado;

    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;

    while(true){
        try{
            string entrada;
            cout << "Digite Nome: " << endl;
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite Sobrenome: " << endl;
            cin >> entrada;
            sobrenome.setSobrenome(entrada);
            cout << "Digite Email: " << endl;
            cin >> entrada;
            email.setEmail(entrada);
            cout << "Digite Senha: " << endl;
            cin >> entrada;
            senha.setSenha(entrada);

            leitor.set_Nome(nome);
            leitor.set_Sobrenome(sobrenome);
            leitor.set_Email(email);
            leitor.set_Senha(senha);
            break;
        }
        catch(invalid_argument &exp){
                        cout << "formato incorreto" << endl;
        }
    }

    resultado = cntrSUsuario->editar(email);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAUsuarioExcluir::executar(ISUsuario* cntrSUsuario) throw(runtime_error){
    Resultado resultado;

    Email email;

    // Código de interação com o usuário.

    while(true){
        try{
            string entrada;
            cout << "Digite O Email: ";
            cin >> entrada;
            email.setEmail(entrada);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Email com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrSUsuario->excluir(email);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAUsuarioVocabulario::executar(ISUsuario* cntrSUsuario) throw(runtime_error){
    IAVocabulario *cntrIAVocabulario;
    cntrIAVocabulario = new CntrIAVocabulario();

    ISVocabulario *stubSVocabulario;
    stubSVocabulario = new StubSVocabulario();
    cntrIAVocabulario->setCntrSVocabulario(stubSVocabulario);

    cntrIAVocabulario->executar();
}

void ComandoIAVocabularioCriarT::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Nome nome;
    ClasseTermo ctermo;
    Data data;
    Termo termo;

    while(true){
        try{
            string entrada;

            cout << "Digite o nome do termo: ";
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite a classe do termo: ";
            cin >> entrada;
            ctermo.setClasseTermo(entrada);
            cout << "Digite a data(00/00/0000):  ";
            cin >> entrada;
            data.setData(entrada);

            termo.set_Nome(nome);
            termo.set_ClasseTermo(ctermo);
            termo.set_Data(data);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->criarT(termo);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioEditarT::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Nome nome;
    ClasseTermo ctermo;
    Data data;
    Termo termo;

    while(true){
        try{
            string entrada;

            cout << "Digite o nome do termo: ";
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite a classe do termo: ";
            cin >> entrada;
            ctermo.setClasseTermo(entrada);
            cout << "Digite a data(00/00/0000):  ";
            cin >> entrada;
            data.setData(entrada);

            termo.set_Nome(nome);
            termo.set_ClasseTermo(ctermo);
            termo.set_Data(data);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->editarT(termo);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioExcluirT::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Nome nome;

    while(true){
        try{
            string entrada;

            cout << "Digite o nome do termo: ";
            cin >> entrada;
            nome.setNome(entrada);

            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->excluirT(nome);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioCriarD::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Texto texto;
    Data data;
    Definicao def;

    while(true){
        try{
            string entrada;

            cout << "Digite o Texto: ";
            cin.ignore(256, '\n');
            getline(cin, entrada);
            texto.setTexto(entrada);
            cout << "Digite a data(00/00/0000): ";
            cin >> entrada;
            data.setData(entrada);

            def.set_Texto(texto);
            def.set_Data(data);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->criarD(def);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioEditarD::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Texto texto;
    Data data;
    Definicao def;

    while(true){
        try{
            string entrada;

            cout << "Digite o Texto: ";
            cin.ignore(256, '\n');
            getline(cin, entrada);
            texto.setTexto(entrada);
            cout << "Digite a data(00/00/0000): ";
            cin >> entrada;
            data.setData(entrada);

            def.set_Texto(texto);
            def.set_Data(data);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->editarD(def);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioExcluirD::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Texto texto;

    while(true){
        try{
            string entrada;

            cout << "Digite o texto de definicao: ";
            cin.ignore(256, '\n');
            getline(cin, entrada);
            texto.setTexto(entrada);

            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->excluirD(texto);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioCriarV::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Nome nome;
    Idioma idioma;
    Data data;
    Texto texto;
    VocabularioControlado voc;
    Definicao def;

    while(true){
        try{
            string entrada;

            cout << "Digite o nome do Vocabulario: ";
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite o Idioma do Vocabulario: ";
            cin >> entrada;
            idioma.setIdioma(entrada);
            cout << "Digite a data(00/00/0000): ";
            cin >> entrada;
            data.setData(entrada);
            cout << "Digite o Texto de definicao: ";
            cin.ignore(256, '\n');
            getline(cin, entrada);
            texto.setTexto(entrada);

            voc.set_Nome(nome);
            voc.set_Idioma(idioma);
            voc.set_Data(data);
            def.set_Texto(texto);
            def.set_Data(data);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->criarV(voc, def);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioEditarV::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Nome nome;
    Idioma idioma;
    Data data;
    Texto texto;
    VocabularioControlado voc;
    Definicao def;

    while(true){
        try{
            string entrada;

            cout << "Digite o nome do Vocabulario: ";
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite o Idioma do Vocabulario: ";
            cin >> entrada;
            idioma.setIdioma(entrada);
            cout << "Digite a data(00/00/0000): ";
            cin >> entrada;
            data.setData(entrada);
            cout << "Digite o Texto de definicao: ";
            cin.ignore(256, '\n');
            getline(cin, entrada);
            texto.setTexto(entrada);

            voc.set_Nome(nome);
            voc.set_Idioma(idioma);
            voc.set_Data(data);
            def.set_Texto(texto);
            def.set_Data(data);
            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->editarV(voc, def);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}

void ComandoIAVocabularioExcluirV::executar(ISVocabulario* cntrVocabulario) throw(runtime_error){
    Resultado resultado;
    Nome nome;

    while(true){
        try{
            string entrada;

            cout << "Digite o nome do vocabulario: ";
            cin >> entrada;
            nome.setNome(entrada);

            break;
        }
        catch(invalid_argument &exp){
            cout << "Dado com formato incorreto" << endl;
        }
    }

    // Solicitar serviço.

    resultado = cntrVocabulario->excluirV(nome);

    if(resultado.getValor() == Resultado::SUCESSO){
         cout << "Sucesso na execucao da operacao" << endl;
    }
    else {
        cout << "Falha na execucao da operacao" << endl;
    }
}
