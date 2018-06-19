#include <stdlib.h>
#include "dominios.h"


using namespace std;

void Nome::validar(string nome) throw (invalid_argument){

	int tNome = nome.size(), contador = 0;
	char letra;

	if(tNome > TamanhoMaxNome){
		throw invalid_argument("Argumento invalido.");
	}

    letra = nome[contador];
    if(islower(letra)  || isdigit(letra)){
        throw invalid_argument("Deve comocar com letra maiuscula");
    }else{
        contador++;
        while(contador != tNome){

            letra = nome[contador];

            if(isdigit(letra) || isspace(letra) || !isalpha(letra) || ispunct(letra)){
                throw invalid_argument("Argumento invalido! Nao faz parte do Alfabeto!");
            }
            contador++;
        }
    }
}

void Nome::setNome(string nome) throw (invalid_argument){
    validar(nome);
    this->nome = nome;
}

void Sobrenome::validar(string sobrenome) throw (invalid_argument){

	int tSobrenome = sobrenome.size(), contador = 0;
	char letra;

	if(tSobrenome > TamanhoMaxSobrenome){
		throw invalid_argument("Argumento invalido.");
	}

    letra = sobrenome[contador];
    if(islower(letra) || isdigit(letra)){
        throw invalid_argument("Deve comocar com letra maiuscula");
    }else{
        contador++;
        while(contador != tSobrenome){

            letra = sobrenome[contador];

            if(isdigit(letra) || isspace(letra) || !isalpha(letra) || ispunct(letra)){
                throw invalid_argument("Argumento invalido! Nao faz parte do Alfabeto!");
            }
            contador++;
        }
    }
}

void Sobrenome::setSobrenome(string sobrenome) throw (invalid_argument){
    validar(sobrenome);
    this->sobrenome = sobrenome;
}

void Telefone::validar(string telefone) throw (invalid_argument){
    int tTelefone = telefone.size(), contador = 0;
	char letra;

	if(tTelefone > TamanhoTelefone){
		throw invalid_argument("Argumento invalido.");
	}

    letra = telefone[contador];
    if(!isdigit(letra)){
        throw invalid_argument("Deve ser numero.");
    }
    else if((!isspace(telefone[2])) || (telefone[8] != '-')){
        throw invalid_argument("Formato invalido.");
    }else{
        while(contador != tTelefone){
            letra = telefone[contador];

            if(contador == 2){
            if(!isspace(letra)){
                throw invalid_argument ("Telefone invalido");
            }
        }
        else{
            if(contador == 8){
                if(letra != '-'){
                    throw invalid_argument ("Telefone invalido");
                }
            }
            else{
                if(!isdigit(letra)){
                    throw invalid_argument ("Telefone invalido");
                }
            }
        }
        contador++;
        }
    }
}

void Telefone::setTelefone(string telefone) throw (invalid_argument){
    validar(telefone);
    this->telefone = telefone;
}

void Endereco::validar(string endereco) throw (invalid_argument){

	int tEndereco = endereco.size(), contador = 0;
	char letra;

	if(tEndereco > TamanhoMaxEndereco){
		throw invalid_argument("Argumento invalido.");
	}

    letra = endereco[contador];
    if(isspace(letra) || isspace(endereco[tEndereco-1])){
        throw invalid_argument("Espacos no inicio e/ou final");
    }else{
        contador++;
        while(contador != tEndereco){

            letra = endereco[contador];

            if(isspace(letra) && isspace(endereco[contador+1])){
                throw invalid_argument("Dois espacos em sequecia");
            }
            else if(isdigit(letra) || ispunct(letra)){
                throw invalid_argument("Argumento invalido! Nao faz parte do Alfabeto!");
            }
            contador++;
        }
    }
}

void Endereco::setEndereco(string endereco) throw (invalid_argument){
    validar(endereco);
    this->endereco = endereco;
}

void Data::validar(string data) throw (invalid_argument){
    int tData = data.size(), contador = 0;
    char letra;

    if(tData > TamanhoData){
		throw invalid_argument("Argumento invalido.");
	}

    if(data[2] != '/' || data[5] != '/'){
        throw invalid_argument("Argumento invalido.");
    }

	int dia = ((data[0] - '0')*(10))+(data[1] - '0');
	int mes = ((data[3] - '0')*(10))+(data[4] - '0');
	int ano = ((data[6] - '0')*(1000))+((data[7] - '0')*(100))+((data[8] - '0')*(10))+(data[9] - '0');

    if(dia > 31 || dia < 0){
        throw invalid_argument("dia menor que 1 ou maior que 31.");
    }
    if(mes < 1 || mes > 12){
        throw invalid_argument("Mes maior que 12 ou menor que 1.");
    }
    if(ano < 1900 || ano > 2099){
        throw invalid_argument("Ano menor que 1900 ou maior 2099.");
    }else{
        while(contador != tData){

            letra = data[contador];

            if(isalpha(letra)){
                throw invalid_argument("Data Invalida");
            }
            contador++;
        }
    }
}

void Data::setData(string data) throw (invalid_argument){
    validar(data);
    this->data = data;
}

void Email::validar(string email) throw (invalid_argument){
    int tEmail = email.size(), contador = 0, cont2 = 0;
	char letra;

    letra = email[contador];
    if(isspace(letra) || isspace(email[tEmail-1]) || email[contador] == '-' || email[tEmail-1] == '-' || email[contador] == '.' || email[tEmail-1] == '.'){
        throw invalid_argument("Espacos no inicio e/ou final");
    }else{
        while(email[contador] != '@'){
            letra = email[contador];
            if(isspace(letra)){
                throw invalid_argument("Argumento invalido! Nao faz parte do Alfabeto!");
            }
            contador++;
            cont2++;
        }
        cont2++;
        int cont3 = 0, cont4 = 0;
        while(cont2 != tEmail){
            letra = email[cont2];
            if(isspace(letra) || letra == ','){
                throw invalid_argument("Argumento invalido! Nao faz parte do Alfabeto!");
            }
            if(isdigit(letra) || letra == '.'){
                cont4++;
            }
            cont2++;
            cont3++;
        }
        if(cont3==cont4){
            throw invalid_argument("Dominio so de numeros!");
        }
    }
}

void Email::setEmail(string email) throw (invalid_argument){
    validar(email);
    this->email = email;
}

void Senha::validar(string senha) throw (invalid_argument){
    int tSenha = senha.size(), contador = 0, d=0, u=0, l=0;
	char letra;

	if(tSenha > TamanhoSenha){
		throw invalid_argument("Argumento invalido.");
	}

	while(contador != tSenha){

        letra = senha[contador];

        if(ispunct(letra)){
            throw invalid_argument("tem pontuacao na senha");
        }

        if(isdigit(letra)){
            d = 1;
        }
        if(isupper(letra)){
            u = 1;
        }
        if(islower(letra)){
            l = 1;
        }
        contador++;
	}

	if(u == 0 || l == 0 || d == 0){
        throw invalid_argument("Nao atende requisitos");
	}
}

void Senha::setSenha(string senha) throw (invalid_argument){
    validar(senha);
    this->senha = senha;
}

void Texto::validar(string texto) throw (invalid_argument){
    int tTexto = texto.size();

	if(tTexto > TamanhoMaxTexto){
		throw invalid_argument("Texto invalido.");
	}
	if(tTexto <= 0){
        throw invalid_argument("Texto invalido.");
	}
}

void Texto::setTexto(string texto) throw (invalid_argument){
    validar(texto);
    this->texto = texto;
}

void Idioma::validar(string idioma) throw (invalid_argument){
    int tIdioma = idioma.size();

    if(tIdioma > TamanhoIdioma){
        throw invalid_argument("Argumento Invalido.");
    }

    if((idioma=="ESP")){
		return;
	}
	else{
		if((idioma=="FRA")){
			return;
		}
		else{
			if((idioma=="GER")){
				return;
			}
			else{
				if((idioma=="ITA")){
					return;
				}
				else{
					if((idioma=="POR")){
						return;
					}
					else{
                        if((idioma=="SPA")){
                            return;
                        }
                    }
				}
			}
		}
	}
	throw invalid_argument("Idioma invalido");
}

void Idioma::setIdioma(string idioma) throw (invalid_argument){
    validar(idioma);
    this->idioma = idioma;
}

void ClasseTermo::validar(string ctermo) throw (invalid_argument){
    int tCtermo = ctermo.size();

    if(tCtermo > TamanhoCTermo){
        throw invalid_argument("Argumento Invalido.");
    }

    if((ctermo=="NP")){
		return;
	}
	else{
		if((ctermo=="PT")){
			return;
		}
	}
	throw invalid_argument("Idioma invalido");

}

void ClasseTermo::setClasseTermo(string ctermo) throw (invalid_argument){
    validar(ctermo);
    this->ctermo = ctermo;
}
