#include "testes.h"

// Definições de métodos.

void TUNome::setUp(){
    nome = new Nome();
    estado = SUCESSO;
}

void TUNome::tearDown(){
    delete nome;
}

void TUNome::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO);
        if (nome->getNome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUNome::testarCenarioFalha(){
    try{
        nome->setNome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUNome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSobrenome::setUp(){
    sobrenome = new Sobrenome();
    estado = SUCESSO;
}

void TUSobrenome::tearDown(){
    delete sobrenome;
}

void TUSobrenome::testarCenarioSucesso(){
    try{
        sobrenome->setSobrenome(VALOR_VALIDO);
        if (sobrenome->getSobrenome() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSobrenome::testarCenarioFalha(){
    try{
        sobrenome->setSobrenome(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSobrenome::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTelefone::setUp(){
    telefone = new Telefone();
    estado = SUCESSO;
}

void TUTelefone::tearDown(){
    delete telefone;
}

void TUTelefone::testarCenarioSucesso(){
    try{
        telefone->setTelefone(VALOR_VALIDO);
        if (telefone->getTelefone() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTelefone::testarCenarioFalha(){
    try{
        telefone->setTelefone(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTelefone::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEndereco::setUp(){
    endereco = new Endereco();
    estado = SUCESSO;
}

void TUEndereco::tearDown(){
    delete endereco;
}

void TUEndereco::testarCenarioSucesso(){
    try{
        endereco->setEndereco(VALOR_VALIDO);
        if (endereco->getEndereco() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEndereco::testarCenarioFalha(){
    try{
        endereco->setEndereco(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEndereco::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUData::setUp(){
    data = new Data();
    estado = SUCESSO;
}

void TUData::tearDown(){
    delete data;
}

void TUData::testarCenarioSucesso(){
    try{
        data->setData(VALOR_VALIDO);
        if (data->getData() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUData::testarCenarioFalha(){
    try{
        data->setData(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUData::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUEmail::setUp(){
    email = new Email();
    estado = SUCESSO;
}

void TUEmail::tearDown(){
    delete email;
}

void TUEmail::testarCenarioSucesso(){
    try{
        email->setEmail(VALOR_VALIDO);
        if (email->getEmail() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUEmail::testarCenarioFalha(){
    try{
        email->setEmail(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUEmail::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUSenha::setUp(){
    senha = new Senha();
    estado = SUCESSO;
}

void TUSenha::tearDown(){
    delete senha;
}

void TUSenha::testarCenarioSucesso(){
    try{
        senha->setSenha(VALOR_VALIDO);
        if (senha->getSenha() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUSenha::testarCenarioFalha(){
    try{
        senha->setSenha(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUSenha::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUTexto::setUp(){
    texto = new Texto();
    estado = SUCESSO;
}

void TUTexto::tearDown(){
    delete texto;
}

void TUTexto::testarCenarioSucesso(){
    try{
        texto->setTexto(VALOR_VALIDO);
        if (texto->getTexto() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUTexto::testarCenarioFalha(){
    try{
        texto->setTexto(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUTexto::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUIdioma::setUp(){
    idioma = new Idioma();
    estado = SUCESSO;
}

void TUIdioma::tearDown(){
    delete idioma;
}

void TUIdioma::testarCenarioSucesso(){
    try{
        idioma->setIdioma(VALOR_VALIDO);
        if (idioma->getIdioma() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUIdioma::testarCenarioFalha(){
    try{
        idioma->setIdioma(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUIdioma::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TUClasseTermo::setUp(){
    ctermo = new ClasseTermo();
    estado = SUCESSO;
}

void TUClasseTermo::tearDown(){
    delete ctermo;
}

void TUClasseTermo::testarCenarioSucesso(){
    try{
        ctermo->setClasseTermo(VALOR_VALIDO);
        if (ctermo->getClasseTermo() != VALOR_VALIDO)
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

void TUClasseTermo::testarCenarioFalha(){
    try{
        ctermo->setClasseTermo(VALOR_INVALIDO);
        estado = FALHA;
    }
    catch(invalid_argument excecao){
        return;
    }
}

int TUClasseTermo::run(){
    setUp();
    testarCenarioSucesso();
    testarCenarioFalha();
    tearDown();
    return estado;
}

void TULeitor::setUp(){
    nome = new Nome();
    sobrenome = new Sobrenome();
    email = new Email();
    senha = new Senha();
    estado = SUCESSO;
}

void TULeitor::tearDown(){
    delete nome;
    delete sobrenome;
    delete email;
    delete senha;
}

void TULeitor::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO_NOME);
        sobrenome->setSobrenome(VALOR_VALIDO_SOBRENOME);
        email->setEmail(VALOR_VALIDO_EMAIL);
        senha->setSenha(VALOR_VALIDO_SENHA);
        if ((nome->getNome() != VALOR_VALIDO_NOME) || (sobrenome->getSobrenome() != VALOR_VALIDO_SOBRENOME) || (email->getEmail() != VALOR_VALIDO_EMAIL) || (senha->getSenha() != VALOR_VALIDO_SENHA))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TULeitor::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUDesenvolvedor::setUp(){
    nome = new Nome();
    sobrenome = new Sobrenome();
    data = new Data();
    email = new Email();
    senha = new Senha();
    estado = SUCESSO;
}

void TUDesenvolvedor::tearDown(){
    delete nome;
    delete sobrenome;
    delete data;
    delete email;
    delete senha;
}

void TUDesenvolvedor::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO_NOME);
        sobrenome->setSobrenome(VALOR_VALIDO_SOBRENOME);
        data->setData(VALOR_VALIDO_DATA);
        email->setEmail(VALOR_VALIDO_EMAIL);
        senha->setSenha(VALOR_VALIDO_SENHA);
        if ((nome->getNome() != VALOR_VALIDO_NOME) || (sobrenome->getSobrenome() != VALOR_VALIDO_SOBRENOME) || (data->getData() != VALOR_VALIDO_DATA) || (email->getEmail() != VALOR_VALIDO_EMAIL) || (senha->getSenha() != VALOR_VALIDO_SENHA))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUDesenvolvedor::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUAdministrador::setUp(){
    nome = new Nome();
    sobrenome = new Sobrenome();
    telefone = new Telefone();
    data = new Data();
    endereco = new Endereco();
    email = new Email();
    senha = new Senha();
    estado = SUCESSO;
}

void TUAdministrador::tearDown(){
    delete nome;
    delete sobrenome;
    delete telefone;
    delete data;
    delete endereco;
    delete email;
    delete senha;
}

void TUAdministrador::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO_NOME);
        sobrenome->setSobrenome(VALOR_VALIDO_SOBRENOME);
        telefone->setTelefone(VALOR_VALIDO_TELEFONE);
        data->setData(VALOR_VALIDO_DATA);
        endereco->setEndereco(VALOR_VALIDO_ENDERECO);
        email->setEmail(VALOR_VALIDO_EMAIL);
        senha->setSenha(VALOR_VALIDO_SENHA);
        if ((nome->getNome() != VALOR_VALIDO_NOME) || (sobrenome->getSobrenome() != VALOR_VALIDO_SOBRENOME) || (telefone->getTelefone() != VALOR_VALIDO_TELEFONE) || (data->getData() != VALOR_VALIDO_DATA) || (endereco->getEndereco() != VALOR_VALIDO_ENDERECO) || (email->getEmail() != VALOR_VALIDO_EMAIL) || (senha->getSenha() != VALOR_VALIDO_SENHA))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUAdministrador::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUVocabularioControlado::setUp(){
    nome = new Nome();
    idioma = new Idioma();
    data = new Data();
    estado = SUCESSO;
}

void TUVocabularioControlado::tearDown(){
    delete nome;
    delete idioma;
    delete data;
}

void TUVocabularioControlado::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO_NOME);
        idioma->setIdioma(VALOR_VALIDO_IDIOMA);
        data->setData(VALOR_VALIDO_DATA);
        if ((nome->getNome() != VALOR_VALIDO_NOME) || (idioma->getIdioma() != VALOR_VALIDO_IDIOMA) || (data->getData() != VALOR_VALIDO_DATA))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUVocabularioControlado::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUTermo::setUp(){
    nome = new Nome();
    ctermo = new ClasseTermo();
    data = new Data();
    estado = SUCESSO;
}

void TUTermo::tearDown(){
    delete nome;
    delete ctermo;
    delete data;
}

void TUTermo::testarCenarioSucesso(){
    try{
        nome->setNome(VALOR_VALIDO_NOME);
        ctermo->setClasseTermo(VALOR_VALIDO_CTERMO);
        data->setData(VALOR_VALIDO_DATA);
        if ((nome->getNome() != VALOR_VALIDO_NOME) || (ctermo->getClasseTermo() != VALOR_VALIDO_CTERMO) || (data->getData() != VALOR_VALIDO_DATA))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUTermo::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}

void TUDefinicao::setUp(){
    texto = new Texto();
    data = new Data();
    estado = SUCESSO;
}

void TUDefinicao::tearDown(){
    delete texto;
    delete data;
}

void TUDefinicao::testarCenarioSucesso(){
    try{
        texto->setTexto(VALOR_VALIDO_TEXTO);
        data->setData(VALOR_VALIDO_DATA);
        if ((texto->getTexto() != VALOR_VALIDO_TEXTO) || (data->getData() != VALOR_VALIDO_DATA))
            estado = FALHA;
    }
    catch(invalid_argument excecao){
        estado = FALHA;
    }
}

int TUDefinicao::run(){
    setUp();
    testarCenarioSucesso();
    tearDown();
    return estado;
}
