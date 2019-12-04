#include "Consultor.h"
#include "Funcionario.h"
#include <string>
#include <sstream>
#include <stdio.h>

using namespace std;

Consultor::Consultor()
{
    this->Nome = "Nome não definido.";
    this->Matricula = "Matricula não definida.";
    this->Salario = 0.0;
}
Consultor::Consultor(string nome, string matricula, double salario)
{
    this->Nome = nome;
    this->Matricula = matricula;
    this->Salario = salario;
}

double Consultor::getSalario(){
    return Salario += (Salario/10);
}
double Consultor::getSalario(float percentual){
    return Salario += (Salario/percentual);
}
