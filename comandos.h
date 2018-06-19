#ifndef COMANDOS_H_INCLUDED
#define COMANDOS_H_INCLUDED

#include "dominios.h"
#include "entidades.h"
#include "controladoras.h"
#include "stubs.h"

#include <stdexcept>
#include <iostream>
#include <cstdlib>


class ComandoIACadastro {

public:

    // Método por meio do qual é solicitada a execução do comando.

    virtual void executar(ISCadastro*) throw(runtime_error) = 0;

    // Método destrutor virtual.

    virtual ~ComandoIACadastro(){}
};

class ComandoIACadastroLeitor:public ComandoIACadastro{

public:

    // Método por meio do qual é solicitada a execução do comando.

    void executar(ISCadastro*) throw(runtime_error);
};


class ComandoIACadastroAdm : public ComandoIACadastro {
  public:

    void executar(ISCadastro *)  throw(runtime_error);
};

class ComandoIACadastroDev : public ComandoIACadastro {
  public:

    void executar(ISCadastro *)  throw(runtime_error);
};


class ComandoIAUsuario {
 public:

  virtual void executar(ISUsuario *) throw(runtime_error) = 0;


  virtual ~ComandoIAUsuario(){}
};

class ComandoIAUsuarioMostrar : public ComandoIAUsuario {
 public:

  void executar(ISUsuario *) throw(runtime_error);
};

class ComandoIAUsuarioEditar : public ComandoIAUsuario {
 public:

  void executar(ISUsuario *) throw(runtime_error);
};


class ComandoIAUsuarioExcluir : public ComandoIAUsuario {
 public:

  void executar(ISUsuario *)  throw(runtime_error);
};

class ComandoIAUsuarioVocabulario : public ComandoIAUsuario {
 public:

  void executar(ISUsuario *)  throw(runtime_error);
};

class ComandoIAVocabulario {
 public:

  virtual void executar(ISVocabulario *) throw(runtime_error) = 0;


  virtual ~ComandoIAVocabulario(){}
};

class ComandoIAVocabularioCriarT : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};

class ComandoIAVocabularioEditarT : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};
class ComandoIAVocabularioExcluirT : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};

class ComandoIAVocabularioCriarD : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};

class ComandoIAVocabularioEditarD : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};
class ComandoIAVocabularioExcluirD : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};

class ComandoIAVocabularioCriarV : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};

class ComandoIAVocabularioEditarV : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};
class ComandoIAVocabularioExcluirV : public ComandoIAVocabulario{
 public:

  void executar(ISVocabulario *) throw(runtime_error);
};

#endif // COMANDOS_H_INCLUDED

