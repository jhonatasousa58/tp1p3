#ifndef ENTIDADES_H
#define ENTIDADES_H

#include "dominios.h"
#include <string>
#include <iostream>
#include <stdexcept>
#include <cstring>
#include <cctype>
#include <stdio.h>

using namespace std;

class Leitor{
private:

    Nome nome;
    Sobrenome sobrenome;
    Email email;
    Senha senha;

public:

    void set_Nome(Nome &nome){
        this->nome = nome;
    }
    void set_Sobrenome(Sobrenome &sobrenome){
        this->sobrenome = sobrenome;
    }
    void set_Email(Email &email){
        this->email = email;
    }
    void set_Senha(Senha &senha){
        this->senha = senha;
    }

    string get_Nome(){
        return nome.getNome();
    }
    string get_Sobrenome(){
        return sobrenome.getSobrenome();
    }
    string get_Email(){
        return email.getEmail();
    }
    string get_Senha(){
        return senha.getSenha();
    }
};

class Desenvolvedor{
private:

    Nome nome;
    Sobrenome sobrenome;
    Data data;
    Email email;
    Senha senha;

public:

    void set_Nome(Nome &nome){
        this->nome = nome;
    }
    void set_Sobrenome(Sobrenome &sobrenome){
        this->sobrenome = sobrenome;
    }
    void set_Data(Data &data){
        this->data = data;
    }
    void set_Email(Email &email){
        this->email = email;
    }
    void set_Senha(Senha &senha){
        this->senha = senha;
    }

    string get_Nome(){
        return nome.getNome();
    }
    string get_Sobrenome(){
        return sobrenome.getSobrenome();
    }
    string get_Data(){
        return data.getData();
    }
    string get_Email(){
        return email.getEmail();
    }
    string get_Senha(){
        return senha.getSenha();
    }
};

class Administrador{
private:

    Nome nome;
    Sobrenome sobrenome;
    Telefone telefone;
    Data data;
    Endereco endereco;
    Email email;
    Senha senha;

public:

    void set_Nome(Nome &nome){
        this->nome = nome;
    }
    void set_Sobrenome(Sobrenome &sobrenome){
        this->sobrenome = sobrenome;
    }
    void set_Telefone(Telefone &telefone){
        this->telefone = telefone;
    }
    void set_Data(Data &data){
        this->data = data;
    }
    void set_Endereco(Endereco &endereco){
        this->endereco = endereco;
    }
    void set_Email(Email &email){
        this->email = email;
    }
    void set_Senha(Senha &senha){
        this->senha = senha;
    }

    string get_Nome(){
        return nome.getNome();
    }
    string get_Sobrenome(){
        return sobrenome.getSobrenome();
    }
    string get_Telefone(){
        return telefone.getTelefone();
    }
    string get_Data(){
        return data.getData();
    }
    string get_Endereco(){
        return endereco.getEndereco();
    }
    string get_Email(){
        return email.getEmail();
    }
    string get_Senha(){
        return senha.getSenha();
    }
};

class VocabularioControlado{
private:

    Nome nome;
    Idioma idioma;
    Data data;

public:

    void set_Nome(Nome &nome){
        this->nome = nome;
    }
    void set_Idioma(Idioma &idioma){
        this->idioma = idioma;
    }
    void set_Data(Data &data){
        this->data = data;
    }

    string get_Nome(){
        return nome.getNome();
    }
    string get_Idioma(){
        return idioma.getIdioma();
    }
    string get_Data(){
        return data.getData();
    }
};

class Termo{
private:

    Nome nome;
    ClasseTermo ctermo;
    Data data;

public:

    void set_Nome(Nome &nome){
        this->nome = nome;
    }
    void set_ClasseTermo(ClasseTermo &ctermo){
        this->ctermo = ctermo;
    }
    void set_Data(Data &data){
        this->data = data;
    }

    string get_Nome(){
        return nome.getNome();
    }
    string get_ClasseTermo(){
        return ctermo.getClasseTermo();
    }
    string get_Data(){
        return data.getData();
    }
};

class Definicao{
private:

    Texto texto;
    Data data;

public:

    void set_Texto(Texto &texto){
        this->texto = texto;
    }
    void set_Data(Data &data){
        this->data = data;
    }

    string get_Texto(){
        return texto.getTexto();
    }
    string get_Data(){
        return data.getData();
    }
};

class Resultado {

protected:
    int valor;

public:

    const static int SUCESSO = 0;
    const static int FALHA   = 1;

    void setValor(int valor){
        this->valor = valor;
    }

    int getValor() const {
        return valor;
    }
};

class ResultadoAutenticacao:public Resultado {

private:
    Email email;

public:
    void SetEmail(const Email &email){      // passagem por referência.
        this->email = email;
    }

    Email GetEmail() const {
        return email;
    }
};

class resultadoUsuario{
private:
    int valor;
    Leitor Uleitor;
    Administrador Uadm;
    Desenvolvedor Udev;

public:
    void setresultadoUsuario(int valor){
        this->valor = valor;
    }

    int getUsuario() const {
        return valor;
    }
};

#endif
