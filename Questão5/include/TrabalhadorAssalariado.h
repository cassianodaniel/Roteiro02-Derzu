#ifndef TRABALHADORASSALARIADO_H
#define TRABALHADORASSALARIADO_H
#include "Trabalhador.h"
#include <string>
#include <iostream>
using namespace std;

class TrabalhadorAssalariado : public Trabalhador
{
    public:
        TrabalhadorAssalariado();
        TrabalhadorAssalariado(string, double);
        string getNome();
        virtual ~TrabalhadorAssalariado();
        void setSalario(double);
        double getSalario();

    protected:

    private:
};

#endif // TRABALHADORASSALARIADO_H
