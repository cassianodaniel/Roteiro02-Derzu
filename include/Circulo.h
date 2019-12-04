#ifndef CIRCULO_H
#define CIRCULO_H
#include <string>
#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;

class Circulo : public FiguraGeometrica
{
    public:
        Circulo();
        Circulo(int,double);
        void setPi(int);
        void setRaio(double);
        int getPi();
        double getRaio();
        double calcularArea();
    protected:
        int Pi;
        double Raio;
    private:
};

#endif // CIRCULO_H
