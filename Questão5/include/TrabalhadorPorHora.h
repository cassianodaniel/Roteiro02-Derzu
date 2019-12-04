#ifndef TRABALHADORPORHORA_H
#define TRABALHADORPORHORA_H
#include "Trabalhador.h"
#include <string>
#include <iostream>
using namespace std;

class TrabalhadorPorHora: public Trabalhador
{
    public:
        TrabalhadorPorHora();
        TrabalhadorPorHora(string, double);
        double calcularPagamentoMensal(int);
        double calcularPagamentoSemanal(int);
        virtual ~TrabalhadorPorHora();
        string getNome();
    protected:
        double valorDaHora;
    private:
};

#endif // TRABALHADORPORHORA_H
