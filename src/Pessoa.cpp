#include "Pessoa.h"
#include <iostream>
#include <string>

using namespace std;

Pessoa::Pessoa()
{
    this->Nome = "Não configurado.";
    this->vEndereco.setBairro("Bairro");
    this->vEndereco.setRua("Rua");
    this->vEndereco.setCidade("SP");
    this->vEndereco.setCEP("58394");
    this->vEndereco.setEstado("SP");
    this->vEndereco.setNumero(2);
    this->Telefone = "Não configurado.";
}

Pessoa::Pessoa(string nome)
{
    this->Nome = nome;
    this->vEndereco.setBairro("Bairro");
    this->vEndereco.setRua("Rua");
    this->vEndereco.setCidade("SP");
    this->vEndereco.setCEP("58394");
    this->vEndereco.setEstado("SP");
    this->vEndereco.setNumero(2);
    this->Telefone = "Não configurado.";
}

Pessoa::Pessoa(string nome, Endereco endereco, string telefone)
{
    this->Nome = nome;
    this->vEndereco = endereco;
    this->Telefone = telefone;
}


    string Pessoa::getNome(){
        return this->Nome;
    }
    Endereco Pessoa::getEndereco(){
        return this->vEndereco;
    }
    string Pessoa::getTelefone(){
        return this->Telefone;
    }
    void Pessoa::setNome(string nome){
        this->Nome = nome;
    }
    void Pessoa::setEndereco(Endereco endereco){
        this->vEndereco = endereco;
    }
    void Pessoa::setTelefone(string telefone){
        this->Telefone = telefone;
    }
