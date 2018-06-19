#ifndef INTERFACES_H_INCLUDED
#define INTERFACES_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include <stdexcept>

using namespace std;

// Declarações adiantadas.
class IAAutenticacao;
class IACadastro;
class IAUsuario;
class IAVocabulario;

class ISAutenticacao;
class ISCadastro;
class ISUsuario;
class ISVocabulario;

class IAAutenticacao {
protected:
     void notificarErroAcesso();
     void notificarErroDigitacao();
     void notificarSucessoOperacao();
public:
        virtual ResultadoAutenticacao autenticar() throw(runtime_error) = 0;
    virtual void setCntrSAutenticacao(ISAutenticacao *) = 0;

    virtual ~IAAutenticacao(){}
     virtual void executar() = 0;
};

class ISAutenticacao {
public:

    virtual Resultado autenticar(Email&, Senha&) throw(runtime_error)= 0;

    virtual ~ISAutenticacao(){}
};

class IAUsuario {
public:

    // Método por meio do qual é solicitado o serviço.

    virtual void executar(const Email&) throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrSUsuario(ISUsuario *) = 0;

    // Método destrutor virtual.

    virtual ~IAUsuario(){}
};

// Declaração de interface da camada de negócio
// ------------------------------------------------------------------

class ISUsuario{
public:

    virtual Resultado mostrar(Email&) throw(runtime_error) = 0;
    virtual Resultado editar(Email&) throw(runtime_error) = 0;
    virtual Resultado excluir(Email&) throw(runtime_error) = 0;

    virtual ~ISUsuario(){}
};

class IACadastro {
public:

    // Método por meio do qual é solicitado o serviço.

    virtual void executar() throw(runtime_error) = 0;

};

class ISCadastro{
public:
    virtual Resultado cadastrarLeitor(Leitor&) throw(runtime_error) = 0;
    virtual Resultado cadastrarAdministrador(Administrador&) throw(runtime_error) = 0;
    virtual Resultado cadastrarDesenvolverdor(Desenvolvedor&) throw(runtime_error) = 0;

    virtual ~ISCadastro(){}
};

class IAVocabulario {
public:

    // Método por meio do qual é solicitado o serviço.

    virtual void executar() throw(runtime_error) = 0;

    // Método por meio do qual é estabelecida ligação (link) com a controladora de negócio.

    virtual void setCntrSVocabulario(ISVocabulario *) = 0;

    // Método destrutor virtual.

    virtual ~IAVocabulario(){}
};

class ISVocabulario{
public:
    virtual Resultado criarT(Termo&) throw(runtime_error) = 0;
    virtual Resultado editarT(Termo&) throw(runtime_error) = 0;
    virtual Resultado excluirT(Nome&) throw(runtime_error) = 0;

    virtual Resultado criarD(Definicao&) throw(runtime_error) = 0;
    virtual Resultado editarD(Definicao&) throw(runtime_error) = 0;
    virtual Resultado excluirD(Texto&) throw(runtime_error) = 0;

    virtual Resultado criarV(VocabularioControlado&, Definicao&) throw(runtime_error) = 0;
    virtual Resultado editarV(VocabularioControlado&, Definicao&) throw(runtime_error) = 0;
    virtual Resultado excluirV(Nome&) throw(runtime_error) = 0;

    virtual ~ISVocabulario(){}
};

#endif // INTERFACES_H_INCLUDED
