#include "Quadrado.h"
#include <string>

using namespace std;

Quadrado::Quadrado()
{
    Lados = 0;
}

Quadrado::Quadrado(int lados)
{
    Lados = lados;
}

void Quadrado::setLados(int lados){
    this->Lados = lados;
    if(lados < 0){
        Lados = 0;
    }
}

int Quadrado::getLados(){
    return this-> Lados;
}

double Quadrado::calcularArea(){
    return this->Lados*this->Lados;
}
