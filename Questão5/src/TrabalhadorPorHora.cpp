#include "TrabalhadorPorHora.h"
#include <string>
#include <iostream>
using namespace std;

TrabalhadorPorHora::TrabalhadorPorHora()
{
    this->valorDaHora = 0.0;
}

TrabalhadorPorHora::TrabalhadorPorHora(string nome, double hora)
{
    this->Nome = nome;
    this->valorDaHora = hora;
}

TrabalhadorPorHora::~TrabalhadorPorHora()
{
    //dtor
}

string TrabalhadorPorHora::getNome(){
    return this->Nome;
}

double TrabalhadorPorHora::calcularPagamentoSemanal(int horasSemanais){
    if(horasSemanais > 40){
        return ((horasSemanais*valorDaHora)+((horasSemanais-40)*(valorDaHora*0.5)));
    }else if(horasSemanais<=40){
        return (horasSemanais*valorDaHora);
    }
}

double TrabalhadorPorHora::calcularPagamentoMensal(int horasSemanais){
    if(horasSemanais > 40){
        return ((horasSemanais*valorDaHora)*4) + ((horasSemanais-40) * (valorDaHora + (valorDaHora/2)));
    }else if(horasSemanais<=40){
    return ((horasSemanais*valorDaHora)*4);
    }
}
