#ifndef CONTROLADORAS_H_INCLUDED
#define CONTROLADORAS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "UnidadePersistencia.h"
#include <stdexcept>
#include <iostream>
#include <cstdlib>
#define CLR_SCR system("cls");

using namespace std;

class CntrInteracao {
     virtual void apresentarOpcoes() = 0;
protected:
     void notificarErroAcesso();
     void notificarErroDigitacao();
     void notificarSucessoOperacao();
public:
     virtual void executar() = 0;
};

class CntrAutenticacao:public CntrInteracao {
       void apresentarOpcoes();
public:
       CntrAutenticacao(){}
       void executar();
};

class CntrNavegacao:public CntrInteracao {
        //Constantes para identificar a opção escolhida.
        static const unsigned int NUMERO_OPCOES  = 3;
        static const unsigned int LOGAR          = 1;
        static const unsigned int CADASTRAR      = 2;
        static const unsigned int OPCAO_ENCERRAR = 3;

        void apresentarOpcoes();
public:
       CntrNavegacao(){}
       void executar();
};

class CntrIAUsuarioL:public CntrInteracao{
private:

    const static int EDITAR   = 1;
    const static int REMOVER  = 2;
    const static int LISTARV  = 3;
    const static int RETORNAR = 4;

    void apresentarOpcoes();
    void editar();
    void remover();
    void listarv();

public:
    CntrIAUsuarioL(){}
    void executar();
};

class CntrIAUsuarioD:public CntrInteracao{
private:

    const static int EDITAR   = 1;
    const static int REMOVER  = 2;
    const static int LISTARV  = 3;
    const static int VOCABS   = 4;
    const static int CADDEVV  = 5;
    const static int RETORNAR = 6;

    void apresentarOpcoes();
    void editar();
    void remover();
    void listarv();
    void vocabs();

public:
    CntrIAUsuarioD(){}
    void executar();
};

class CntrIAUsuarioA:public CntrInteracao{
private:

    const static int EDITAR   = 1;
    const static int REMOVER  = 2;
    const static int LISTARV  = 3;
    const static int VOCABS   = 4;
    const static int RETORNAR = 5;

    void apresentarOpcoes();
    void editar();
    void remover();
    void listarv();
    void vocabs();

public:
    CntrIAUsuarioA(){}
    void executar();
};

class CntrIACadastro:public CntrInteracao{
private:

    const static int LEITOR         = 1;
    const static int ADMINISTRADOR  = 2;
    const static int DESENVOLVEDOR  = 3;
    const static int RETORNAR       = 4;

    void cadastrarL();
    void cadastrarD();
    void cadastrarA();

public:
    void apresentarOpcoes();
    CntrIACadastro(){}
    void executar() throw(runtime_error);
};

class CntrIAVocabulario:public CntrInteracao{
private:

    const static int CRIART    = 1;
    const static int EDITART   = 2;
    const static int REMOVERT  = 3;
    const static int CRIARD    = 4;
    const static int EDITARD   = 5;
    const static int REMOVERD  = 6;
    const static int CRIARV    = 7;
    const static int EDITARV   = 8;
    const static int REMOVERV  = 9;
    const static int RETORNAR  = 10;

    void apresentarOpcoes();

public:

    void executar() throw(runtime_error);
    CntrIAVocabulario(){}

};

#endif // CONTROLADORAS_H_INCLUDED
