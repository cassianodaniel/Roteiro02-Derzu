#ifndef CONSULTOR_H
#define CONSULTOR_H
#include <iostream>
#include "Funcionario.h"


class Consultor: public Funcionario{
    public:
        Consultor();
        Consultor(string,string,double);
        double getSalario();
        double getSalario(float percentual);
    protected:

    private:
};

#endif // CONSULTOR_H
