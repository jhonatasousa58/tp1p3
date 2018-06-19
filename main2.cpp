#include <stdexcept>
#include <iostream>
#include <string>

#include "dominios.h"
#include "entidades.h"

int main(){
    string entrada[10], saida[10];
    Nome nome;
    Sobrenome sobrenome;
    Telefone telefone;
    Endereco endereco;
    Data data;
    Email email;
    Senha senha;
    Texto texto;
    Idioma idioma;
    ClasseTermo ctermo;


    try{
        cin >> entrada[0] >> entrada[1];
        cin.ignore(256, '\n');

        getline(cin, entrada[2]);
        getline(cin, entrada[3]);
        getline(cin, entrada[4]);
        getline(cin, entrada[5]);
        getline(cin, entrada[6]);
        getline(cin, entrada[7]);
        getline(cin, entrada[8]);
        getline(cin, entrada[9]);


        nome.setNome(entrada[0]);
        sobrenome.setSobrenome(entrada[1]);
        telefone.setTelefone(entrada[2]);
        endereco.setEndereco(entrada[3]);
        data.setData(entrada[4]);
        email.setEmail(entrada[5]);
        senha.setSenha(entrada[6]);
        texto.setTexto(entrada[7]);
        idioma.setIdioma(entrada[8]);
        ctermo.setClasseTermo(entrada[9]);

        saida[0] = nome.getNome();
        saida[1] = sobrenome.getSobrenome();
        saida[2] = telefone.getTelefone();
        saida[3] = endereco.getEndereco();
        saida[4] = data.getData();
        saida[5] = email.getEmail();
        saida[6] = senha.getSenha();
        saida[7] = texto.getTexto();
        saida[8] = idioma.getIdioma();
        saida[9] = ctermo.getClasseTermo();

        cout << saida[0] << '-' << saida[1] << endl;
        cout << saida[2] << endl;
        cout << saida[3] << endl;
        cout << saida[4] << endl;
        cout << saida[5] << endl;
        cout << saida[6] << endl;
        cout << saida[7] << endl;
        cout << saida[8] << endl;
        cout << saida[9] << endl;
    }
    catch(invalid_argument){
        cout << "ja era";
    }
}
