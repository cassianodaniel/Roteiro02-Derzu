#include "Funcionario.h"
#include <string>
#include <sstream>
#include <iostream>

using namespace std;

Funcionario::Funcionario()
{
    this->Nome = "Nome não definido.";
    this->Matricula = "Matricula não definida.";
    this->Salario = 0.0;
}
Funcionario::Funcionario(string nome,string matricula,double salario){
    this->Nome = nome;
    this->Matricula = matricula;
    this->Salario = salario;
}
string Funcionario::getNome(){
    return this->Nome;
}
string Funcionario::getMatricula(){
    return this->Matricula;
}
double Funcionario::getSalario(){
    return this->Salario;
}
void Funcionario::setNome(string nome){
    this->Nome = nome;
}
void Funcionario::setMatricula(string matricula){
    this->Matricula = matricula;
}
void Funcionario::setSalario(double salario){
    this->Salario = salario;
}
string Funcionario::toString(){
stringstream varauxtostring;
varauxtostring << "Nome: " << this->Nome << "\nSalario: " << this->Salario << "\nMatricula: " << this->Matricula << endl;
return varauxtostring.str();
}
