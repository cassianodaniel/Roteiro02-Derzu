#include "TrabalhadorAssalariado.h"
#include <string>
#include <iostream>
using namespace std;

TrabalhadorAssalariado::TrabalhadorAssalariado()
{
    Nome = "Não configurado";
    Salario = 0.0;
}

TrabalhadorAssalariado::TrabalhadorAssalariado(string nome, double salario)
{
    Nome = nome;
    Salario = salario;
}

double TrabalhadorAssalariado::getSalario(){
    return this->Salario;
}

void TrabalhadorAssalariado::setSalario(double salario){
    this->Salario = salario;
}

TrabalhadorAssalariado::~TrabalhadorAssalariado()
{
    //dtor
}

string TrabalhadorAssalariado::getNome(){
    return this->Nome;
}
