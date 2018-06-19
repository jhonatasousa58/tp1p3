#ifndef DOMINIOS_H
#define DOMINIOS_H

#include <string>
#include <iostream>
#include <stdexcept>
#include <cstring>
#include <cctype>
#include <stdio.h>

using namespace std;

class Nome{
private:

    string nome;
    const static int TamanhoMaxNome=20;

    void validar (string) throw (invalid_argument);

public:

    void setNome(string) throw (invalid_argument);

    string getNome(){
        return nome;
    }
};

class Sobrenome{
private:

    string sobrenome;
    const static int TamanhoMaxSobrenome=20;

    void validar (string) throw (invalid_argument);

public:

    void setSobrenome(string) throw (invalid_argument);

    string getSobrenome(){
        return sobrenome;
    }
};

class Telefone{
private:

    string telefone;
    const static int TamanhoTelefone=13;

    void validar(string) throw (invalid_argument);

public:

    void setTelefone(string) throw (invalid_argument);

    string getTelefone(){
        return telefone;
    }
};

class Endereco{
private:

    string endereco;
    const static int TamanhoMaxEndereco = 20;

    void validar(string) throw (invalid_argument);

public:

    void setEndereco(string) throw (invalid_argument);

    string getEndereco(){
        return endereco;
    }
};

class Data{
private:

    string data;

    const static int TamanhoData=10; /** Valor constate, armazena o numero maximo de caracteres que podem estar na string*/

    void validar(string) throw (invalid_argument);

public:

    void setData(string) throw (invalid_argument);

    string getData(){
        return data;
    }
};

class Email{
private:

    string email;

    void validar(string) throw (invalid_argument);

public:

    void setEmail(string) throw (invalid_argument);

    string getEmail(){
        return email;
    }
};

class Senha{
private:

    string senha;
    const static int TamanhoSenha = 8;

    void validar(string) throw (invalid_argument);

public:

    void setSenha(string) throw (invalid_argument);

    string getSenha(){
        return senha;
    }
};

class Texto{
private:

    string texto;
    const static int TamanhoMaxTexto = 30;

    void validar(string) throw (invalid_argument);

public:

    void setTexto(string) throw (invalid_argument);

    string getTexto(){
        return texto;
    }
};

class Idioma{
private:

    string idioma;
    const static int TamanhoIdioma = 3;

    void validar(string) throw (invalid_argument);

public:

    void setIdioma(string) throw (invalid_argument);

    string getIdioma(){
        return idioma;
    }
};

class ClasseTermo{
private:

    string ctermo;
    const static int TamanhoCTermo = 2;

    void validar(string) throw (invalid_argument);

public:

    void setClasseTermo(string) throw (invalid_argument);

    string getClasseTermo(){
        return ctermo;
    }
};

#endif
