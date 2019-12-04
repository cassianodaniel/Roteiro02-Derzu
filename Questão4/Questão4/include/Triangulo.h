#ifndef TRIANGULO_H
#define TRIANGULO_H
#include <string>
#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;

class Triangulo:public FiguraGeometrica{
    public:
        Triangulo();
        Triangulo(double,double);
        virtual ~Triangulo();
        void setBase(double);
        void setAltura(double);
        double getBase();
        double getAltura();
        double calcularArea();
    protected:
        double Base;
        double Altura;
    private:
};

#endif // TRIANGULO_H
