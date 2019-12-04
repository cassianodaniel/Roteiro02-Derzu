#include "Endereco.h"
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

Endereco::Endereco()
{
    this->Bairro = "Não configurado.";
    this->CEP = "Não configurado.";
    this->Cidade = "Não configurado.";
    this->Estado = "Não configurado.";
    this->Rua = "Não configurado.";
    this->Numero = 0;
}

Endereco::Endereco(string bairro,string cep,string cidade,string estado,string rua,int numero){
    this->Bairro = bairro;
    this->CEP = cep;
    this->Cidade = cidade;
    this->Estado = estado;
    this->Rua = rua;
    this->Numero = numero;
}

string Endereco::toString(){
    stringstream varauxtostring;
    varauxtostring << Estado << ", " << Cidade << ", " << Bairro << ", " << Rua << ", " << CEP << ", " << Numero << ".";
    return varauxtostring.str();
}

string Endereco::getBairro(){
    return Bairro;
}

string Endereco::getCEP(){
    return CEP;
}

string Endereco::getCidade(){
    return Cidade;
}

string Endereco::getEstado(){
    return Estado;
}

int Endereco::getNumero(){
    return Numero;
}

string Endereco::getRua(){
    return Rua;
}

void Endereco::setBairro(string bairro){
    this->Bairro = bairro;
}

void Endereco::setCEP(string cep){
    this->CEP = cep;
}

void Endereco::setCidade(string cidade){
    this->Cidade = cidade;
}

void Endereco::setEstado(string estado){
    this->Estado = estado;
}

void Endereco::setRua(string rua){
    this->Rua = rua;
}

void Endereco::setNumero(int numero){
    this->Numero = numero;
}
