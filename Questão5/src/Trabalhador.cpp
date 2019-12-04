#include "Trabalhador.h"
#include <string>
#include <iostream>
using namespace std;

Trabalhador::Trabalhador()
{
    this->Nome = "Não definido.";
    this->Salario = 0.0;
}

Trabalhador::Trabalhador(string nome, double salario)
{
    this->Nome = nome;
    this->Salario = salario;
}

Trabalhador::~Trabalhador()
{
    //dtor
}

void Trabalhador::setNome(string nome){
    this->Nome = nome;
}

void Trabalhador::setSalario(double salario){
    this->Salario = salario;
}
