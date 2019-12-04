#include "Circulo.h"
#include <string>

using namespace std;

Circulo::Circulo()
{
    Pi = 0;
    Raio = 0;
}

Circulo::Circulo(int pi, double raio)
{
    Pi = pi;
    Raio = raio;
}


void Circulo::setPi(int pi){
    if(pi < 0){
        pi = 0;
    }
    this->Pi = pi*3,14;
}
void Circulo::setRaio(double raio){
    if(raio < 0){
        Raio = 0;
    }else{
    this->Raio = raio;
    }
}
int Circulo::getPi(){
    return this->Pi;
}
double Circulo::getRaio(){
    return this->Raio;
}

double Circulo::calcularArea(){
    return this->Raio*this->Pi;
}
