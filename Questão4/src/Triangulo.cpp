#include "Triangulo.h"
#include <string>

using namespace std;

Triangulo::Triangulo()
{
    Base = 0;
    Altura = 0;
}

Triangulo::Triangulo(double base, double altura)
{
    Base = base;
    Altura = altura;
}


Triangulo::~Triangulo()
{
    //dtor
}

void Triangulo::setBase(double base){
    if(base < 0){
        Base = 0;
    }else{
    this->Base = base;
    }
}
void Triangulo::setAltura(double altura){
    this->Altura = altura;
    if(altura < 0 ){
        Altura = 0;
    }
}
double Triangulo::getBase(){
    return this->Base;
}

double Triangulo::getAltura(){
    return this->Altura;
}

double Triangulo::calcularArea(){
    return this->Base*this->Altura;
}
