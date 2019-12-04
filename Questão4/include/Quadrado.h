#ifndef QUADRADO_H
#define QUADRADO_H
#include <string>
#include <iostream>
#include "FiguraGeometrica.h"

using namespace std;

class Quadrado:public FiguraGeometrica
{
    public:
        Quadrado();
        Quadrado(int);
        void setLados(int);
        int getLados();
        double calcularArea();
    protected:
        int Lados;
    private:
};

#endif // QUADRADO_H
