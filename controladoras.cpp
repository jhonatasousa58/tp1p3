#include "controladoras.h"


void CntrInteracao::notificarErroAcesso(){
     cout << endl << "Erro no acesso ao banco de dados.";
     cout << "Digite algo para continuar :";
     getch();
}

void CntrInteracao::notificarErroDigitacao() {
     cout << endl << "Dado informado incorretamente." << endl << endl;
     cout << "Digite algo para continuar :";
     getch();
}

void CntrInteracao::notificarSucessoOperacao() {
     cout << endl << "Operacao efetuada com sucesso." << endl << endl;
     cout << "Digite algo para continuar :";
     getch();
}

void CntrNavegacao::apresentarOpcoes(){
    cout << "Sistema de Vocabularios" << endl;
    cout << "1 - Logar no Sistema." << endl;
    cout << "2 - Cadastrar Usuario." << endl;
    cout << "3 - Encerrar o Sistema." << endl;
    cout << "Escolha um opcao: ";
}

void CntrNavegacao::executar(){
        unsigned int escolha;
        CntrAutenticacao cntrA;
        CntrIACadastro cntrU;

        while (true) {
                escolha = 0;
                while(escolha == 0 || escolha > NUMERO_OPCOES){
                        CLR_SCR;
                        apresentarOpcoes();
                        cout << "Escolha a opcao : ";
                        cin >> escolha;
                }
                switch (escolha) {
                        case LOGAR:
                                                cntrA.executar();
                                                break;
                        case CADASTRAR:
                                                cntrU.executar();
                                                break;
                        case OPCAO_ENCERRAR :   return;
                }
        }
}

void CntrIAUsuarioL::apresentarOpcoes(){
}

void CntrIAUsuarioL::executar(){
     CLR_SCR;
    cout << "Sistema de Vocabularios" << endl;
    cout << "1 - Editar Dados do Usuario." << endl;
    cout << "2 - Remover Usuario." << endl;
    cout << "3 - Listar Vocabularios." << endl;
    cout << "4 - Retornar." << endl;
    cout << "Escolha um opcao: ";
        unsigned int escolha;

        while (true) {
                escolha = 0;
                while(escolha == 0 || escolha > 4){
                        cout << "Escolha a opcao : ";
                        cin >> escolha;
                }
                switch (escolha) {

                    case EDITAR:    editar();
                                    break;

                    case REMOVER:   remover();
                                    break;

                    case RETORNAR :   return;
                }
        }
}

void CntrIAUsuarioL::editar(){
    CLR_SCR;

    Leitor leitor;

    Nome nome;
    Sobrenome sobrenome;
    Senha senha;
    Email email;

    string emailentrada;
    cout << "Editar Conta." << endl << endl;
    cout << "Digite o email para Confirmacao : ";
    cin >> emailentrada;
    email.setEmail(emailentrada);

    while(true){
        try{
            string entrada;
            cout << "Digite Nome: " << endl;
            cin >> entrada;
            nome.setNome(entrada);
            cout << "Digite Sobrenome: " << endl;
            cin >> entrada;
            sobrenome.setSobrenome(entrada);
            cout << "Digite Senha: " << endl;
            cin >> entrada;
            senha.setSenha(entrada);

            leitor.set_Nome(nome);
            leitor.set_Sobrenome(sobrenome);
            leitor.set_Senha(senha);
            leitor.set_Email(email);
            break;
        }
        catch(invalid_argument &exp){
                        cout << "formato incorreto" << endl;
        }
    }

    ComandoEditarLeitor comando (leitor);

    try {
            comando.executar();
    }
    catch (EErroPersistencia exp) {
            notificarErroAcesso();
            return;
    }

    notificarSucessoOperacao();
        CntrIAUsuarioL cntrLU;
    cntrLU.executar();

}

void CntrIAUsuarioL::remover(){
        string emailentrada;
        Email email;

        CLR_SCR;
        cout << "Remover Conta." << endl << endl;
        cout << "Digite o email para Confirmacao : ";
        cin >> emailentrada;

        try {
                email.setEmail(emailentrada);
        }
        catch (invalid_argument) {
                notificarErroDigitacao();
                return;
        }

        ComandoRemoverConta comando(email);

        try {
                comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
        CntrNavegacao cntrN;
        cntrN.executar();
}

void CntrIAUsuarioD::apresentarOpcoes(){
}

void CntrIAUsuarioD::executar(){
CLR_SCR;
    cout << "Sistema de Vocabularios" << endl;
    cout << "1 - Editar Dados do Usuario." << endl;
    cout << "2 - Remover Usuario." << endl;
    cout << "3 - Listar Vocabularios." << endl;
    cout << "4 - Controle de Vocabularios." << endl;
    cout << "5 - Cadastrar Dev Vocabulario." << endl;
    cout << "6 - Retornar." << endl;
    cout << "Escolha um opcao: ";
        unsigned int escolha;

        while (true) {
                escolha = 0;
                while(escolha == 0 || escolha > 6){
                        cout << "Escolha a opcao : ";
                        cin >> escolha;
                }
                switch (escolha) {

                    case EDITAR:    editar();
                                    break;

                    case REMOVER:   remover();
                                    break;

                    case RETORNAR :   return;
                }
        }
}

void CntrIAUsuarioD::editar(){
    Desenvolvedor dev;

    Nome nome;
    Sobrenome sobrenome;
    Telefone telefone;
    Data data;
    Endereco endereco;
    Email email;
    Senha senha;

    string emailentrada;
    cout << "Editar Conta." << endl << endl;
    cout << "Digite o email para Confirmacao : ";
    cin >> emailentrada;
    email.setEmail(emailentrada);

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

            ComandoEditarDesenvolvedor comando (dev);

    try {
            comando.executar();
    }
    catch (EErroPersistencia exp) {
            notificarErroAcesso();
            return;
    }

    notificarSucessoOperacao();
    CntrIAUsuarioD cntrDU;
    cntrDU.executar();
}

void CntrIAUsuarioD::remover(){
        string emailentrada;
        Email email;

        CLR_SCR;
        cout << "Remover Conta." << endl << endl;
        cout << "Digite o email para Confirmacao : ";
        cin >> emailentrada;

        try {
                email.setEmail(emailentrada);
        }
        catch (invalid_argument) {
                notificarErroDigitacao();
                return;
        }

        ComandoRemoverConta comando(email);

        try {
                comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
        CntrNavegacao cntrN;
        cntrN.executar();
}

void CntrIAUsuarioA::apresentarOpcoes(){

}

void CntrIAUsuarioA::executar(){
CLR_SCR;
    cout << "Sistema de Vocabularios" << endl;
    cout << "1 - Editar Dados do Usuario." << endl;
    cout << "2 - Remover Usuario." << endl;
    cout << "3 - Listar Vocabularios." << endl;
    cout << "4 - Controle de Vocabularios." << endl;
    cout << "5 - Retornar." << endl;
    cout << "Escolha um opcao: ";
        unsigned int escolha;

        while (true) {
                escolha = 0;
                while(escolha == 0 || escolha > 5){
                        cout << "Escolha a opcao : ";
                        cin >> escolha;
                }
                switch (escolha) {

                    case EDITAR:    editar();
                                    break;

                    case REMOVER:   remover();
                                    break;

                    case RETORNAR :   return;
                }
        }
}

void CntrIAUsuarioA::editar(){
    Administrador adm;

    Nome nome;
    Sobrenome sobrenome;
    Telefone telefone;
    Data data;
    Endereco endereco;
    Email email;
    Senha senha;

    string emailentrada;
    cout << "Editar Conta." << endl << endl;
    cout << "Digite o email para Confirmacao : ";
    cin >> emailentrada;
    email.setEmail(emailentrada);

cin.ignore(256, '\n');
    while(true){
        try{
            string entrada;
            cout << "Digite Nome: " << endl;
            getline(cin, entrada);
            nome.setNome(entrada);
            cout << "Digite Sobrenome: " << endl;
            getline(cin, entrada);
            sobrenome.setSobrenome(entrada);
            cout << "Digite Telefone: " << endl;
            getline(cin, entrada);
            telefone.setTelefone(entrada);
            cout << "Digite Data: " << endl;
            getline(cin, entrada);
            data.setData(entrada);
            cout << "Digite Endereco: " << endl;
            getline(cin, entrada);
            endereco.setEndereco(entrada);
            cout << "Digite Senha: " << endl;
            getline(cin, entrada);
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
        ComandoEditarAdministrador comando (adm);

    try {
            comando.executar();
    }
    catch (EErroPersistencia exp) {
            notificarErroAcesso();
            return;
    }

    notificarSucessoOperacao();
    CntrIAUsuarioA cntrAU;
    cntrAU.executar();
}

void CntrIAUsuarioA::remover(){
        string emailentrada;
        Email email;

        CLR_SCR;
        cout << "Remover Conta." << endl << endl;
        cout << "Digite o email para Confirmacao : ";
        cin >> emailentrada;

        try {
                email.setEmail(emailentrada);
        }
        catch (invalid_argument) {
                notificarErroDigitacao();
                return;
        }

        ComandoRemoverConta comando(email);

        try {
                comando.executar();
        }
        catch (EErroPersistencia exp) {
                notificarErroAcesso();
                return;
        }

        notificarSucessoOperacao();
        CntrNavegacao cntrN;
        cntrN.executar();
}

void CntrAutenticacao::apresentarOpcoes(){

}

void CntrIACadastro::apresentarOpcoes(){

}

void CntrAutenticacao::executar(){

        string emailentrada, senhaentrada;
        Email email;
        Senha senha;

        while(true) {
                while(true){
                        CLR_SCR;
                        cout << "Digite o email : ";
                        cin >> emailentrada;
                        cout << "Digite a senha : ";
                        cin >> senhaentrada;

                        try {
                                email.setEmail(emailentrada);
                                senha.setSenha(senhaentrada);
                                break;
                        }
                        catch (invalid_argument exp) {
                                cout << endl << exp.what();
                                cout << endl << endl << "Digite algo para continuar.";
                                getch();
                        }


                }

                ComandoLerSenha comandoLerSenha(email);

                try {
                        comandoLerSenha.executar();
                        string senhaRecuperada;
                        senhaRecuperada = comandoLerSenha.getResultado();



                        //Comparar senha informada com a recuperada.
                        if(senhaRecuperada == senhaentrada){
                            ComandoTipoUsuario comandoTipo(email);
                            comandoTipo.executar();
                            string tipoUser = comandoTipo.getResultado();

                            if(tipoUser == "Leitor"){
                                CntrIAUsuarioL cntrL;
                                cntrL.executar();
                            }
                            else if(tipoUser == "Desenvolvedor"){
                                CntrIAUsuarioD cntrDU;
                                cntrDU.executar();
                            }
                            else{
                                CntrIAUsuarioA cntrAU;
                                cntrAU.executar();
                            }
                            getchar();
                            break;
                        }
                        cout << endl << "Senha digitada diferente da cadastrada.";
                        cout << endl << endl << "Digite algo para continuar.";
                        getch();
                }
                catch(EErroPersistencia exp) {
                        cout << endl << exp.what();
                        cout << endl << endl << "Digite algo para continuar.";
                        getch();
                }
         }


}

void CntrIACadastro::executar() throw(runtime_error){
                        CLR_SCR;
    cout << endl << "Cadastro de Usuario." << endl << endl;

    cout << "Leitor         - " << LEITOR << endl;
    cout << "Administrador  - " << ADMINISTRADOR << endl;
    cout << "Desenvolvedor  - " << DESENVOLVEDOR << endl;
    cout << "Retornar       - " << RETORNAR << endl << endl;
    cout << "Selecione uma opcao :";
    int opcao;

    while(true){
        cin >> opcao;

        switch(opcao){
            case LEITOR:    cadastrarL();
                            break;
            case ADMINISTRADOR:   cadastrarA();
                            break;
            case DESENVOLVEDOR:   cadastrarD();
                            break;
        }

        if(opcao == RETORNAR){
            break;
        }

    }

    return;
}

void CntrIACadastro::cadastrarL() {
    Leitor leitor;

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

    ComandoCadastrarLeitor comando (leitor);

    try {
            comando.executar();
    }
    catch (EErroPersistencia exp) {
            notificarErroAcesso();
            return;
    }

    notificarSucessoOperacao();
    CntrNavegacao cntrN;
    cntrN.executar();

}

void CntrIACadastro::cadastrarA() {
    Administrador adm;

    Nome nome;
    Sobrenome sobrenome;
    Telefone telefone;
    Data data;
    Endereco endereco;
    Email email;
    Senha senha;
cin.ignore(256, '\n');
    while(true){
        try{
            string entrada;
            cout << "Digite Nome: " << endl;
            getline(cin, entrada);
            nome.setNome(entrada);
            cout << "Digite Sobrenome: " << endl;
            getline(cin, entrada);
            sobrenome.setSobrenome(entrada);
            cout << "Digite Telefone: " << endl;
            getline(cin, entrada);
            telefone.setTelefone(entrada);
            cout << "Digite Data: " << endl;
            getline(cin, entrada);
            data.setData(entrada);
            cout << "Digite Endereco: " << endl;
            getline(cin, entrada);
            endereco.setEndereco(entrada);
            cout << "Digite Email: " << endl;
            getline(cin, entrada);
            email.setEmail(entrada);
            cout << "Digite Senha: " << endl;
            getline(cin, entrada);
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
        ComandoCadastrarAdministrador comando (adm);

    try {
            comando.executar();
    }
    catch (EErroPersistencia exp) {
            notificarErroAcesso();
            return;
    }

    notificarSucessoOperacao();
    CntrNavegacao cntrN;
    cntrN.executar();

}

void CntrIACadastro::cadastrarD() {
    Desenvolvedor dev;

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

            ComandoCadastrarDesenvolvedor comando (dev);

    try {
            comando.executar();
    }
    catch (EErroPersistencia exp) {
            notificarErroAcesso();
            return;
    }

    notificarSucessoOperacao();
    CntrNavegacao cntrN;
    cntrN.executar();

}
