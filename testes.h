#ifndef TESTES_H
#define TESTES_H

#include "dominios.h"
#include "entidades.h"

using namespace std;

class TUNome{
private:

    string VALOR_VALIDO = "Fernando";
    string VALOR_INVALIDO = "fernando1";

    Nome *nome;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;


    int run();
};

class TUSobrenome{
private:

    string VALOR_VALIDO = "Albuquerque";
    string VALOR_INVALIDO = "1albuquerque2";

    Sobrenome *sobrenome;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUTelefone{
private:

    string VALOR_VALIDO = "61 90123-4567";
    string VALOR_INVALIDO = "61912345678";

    Telefone *telefone;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUEndereco{
private:

    string VALOR_VALIDO = "UnB Darcy Ribeiro";
    string VALOR_INVALIDO = " UnB  Campus Darcy";

    Endereco *endereco;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUData{
private:

    string VALOR_VALIDO = "17/04/2018";
    string VALOR_INVALIDO = "17-04-2018";

    Data *data;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUEmail{
private:

    string VALOR_VALIDO = "email@email.com";
    string VALOR_INVALIDO = "email@1231231.12312";

    Email *email;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUSenha{
private:

    string VALOR_VALIDO = "Senha123";
    string VALOR_INVALIDO = "senha";

    Senha *senha;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUTexto{
private:

    string VALOR_VALIDO = "ABASTECIMENTO DE ÁGUA";
    string VALOR_INVALIDO = "";

    Texto *texto;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUIdioma{
private:

    string VALOR_VALIDO = "POR";
    string VALOR_INVALIDO = "PT";

    Idioma *idioma;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUClasseTermo{
private:

    string VALOR_VALIDO = "PT";
    string VALOR_INVALIDO = "TP";

    ClasseTermo *ctermo;
    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();
    void testarCenarioFalha();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TULeitor{
private:
    Nome *nome;
    Sobrenome *sobrenome;
    Email *email;
    Senha *senha;

    string VALOR_VALIDO_NOME = "Fernando";
    string VALOR_VALIDO_SOBRENOME = "Albuquerque";
    string VALOR_VALIDO_EMAIL = "email@email.com";
    string VALOR_VALIDO_SENHA = "Senha1";


    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUDesenvolvedor{
private:
    Nome *nome;
    Sobrenome *sobrenome;
    Data *data;
    Email *email;
    Senha *senha;

    string VALOR_VALIDO_NOME = "Fernando";
    string VALOR_VALIDO_SOBRENOME = "Albuquerque";
    string VALOR_VALIDO_DATA = "17/04/2018";
    string VALOR_VALIDO_EMAIL = "email@email.com";
    string VALOR_VALIDO_SENHA = "Senha1";


    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUAdministrador{
private:
    Nome *nome;
    Sobrenome *sobrenome;
    Telefone *telefone;
    Data *data;
    Endereco *endereco;
    Email *email;
    Senha *senha;

    string VALOR_VALIDO_NOME = "Fernando";
    string VALOR_VALIDO_SOBRENOME = "Albuquerque";
    string VALOR_VALIDO_TELEFONE = "61 91234-5678";
    string VALOR_VALIDO_DATA = "17/04/2018";
    string VALOR_VALIDO_ENDERECO = "UnB Darcy Ribeiro";
    string VALOR_VALIDO_EMAIL = "email@email.com";
    string VALOR_VALIDO_SENHA = "Senha1";

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUVocabularioControlado{
private:
    Nome *nome;
    Idioma *idioma;
    Data *data;

    string VALOR_VALIDO_NOME = "Fernando";
    string VALOR_VALIDO_IDIOMA = "POR";
    string VALOR_VALIDO_DATA = "17/04/2018";

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUTermo{
private:
    Nome *nome;
    ClasseTermo *ctermo;
    Data *data;

    string VALOR_VALIDO_NOME = "Fernando";
    string VALOR_VALIDO_CTERMO = "PT";
    string VALOR_VALIDO_DATA = "17/04/2018";

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

class TUDefinicao{
private:
    Texto *texto;
    Data *data;

    string VALOR_VALIDO_TEXTO = "ABASTECIMENTO DE ÁGUA";
    string VALOR_VALIDO_DATA = "17/04/2018";

    int estado;

    void setUp();
    void tearDown();
    void testarCenarioSucesso();

public:

    const static int SUCESSO =  0;
    const static int FALHA   = -1;

    int run();
};

#endif
