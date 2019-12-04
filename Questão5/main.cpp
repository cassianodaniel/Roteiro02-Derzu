#include <iostream>
#include "Trabalhador.h"
#include "TrabalhadorPorHora.h"
#include "TrabalhadorAssalariado.h"
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL, "Portuguese");
    TrabalhadorAssalariado trabalhadorassalariado1 = TrabalhadorAssalariado("PauloAssalariado", 2000);
    TrabalhadorPorHora trabalhadorporhora1 = TrabalhadorPorHora("JoséPorHora", 10);
    cout << trabalhadorassalariado1.getNome() << "\n" << "Salário: "<< trabalhadorassalariado1.getSalario() << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário: " << trabalhadorporhora1.calcularPagamentoSemanal(10) << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário: " << trabalhadorporhora1.calcularPagamentoSemanal(20) << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário: " << trabalhadorporhora1.calcularPagamentoSemanal(30) << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário: " << trabalhadorporhora1.calcularPagamentoSemanal(40) << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário: " << trabalhadorporhora1.calcularPagamentoSemanal(50) << endl; //500+extra
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário mensal: " << trabalhadorporhora1.calcularPagamentoMensal(20) << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário mensal: " << trabalhadorporhora1.calcularPagamentoMensal(30) << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário mensal: " << trabalhadorporhora1.calcularPagamentoMensal(40) << endl;
    cout << trabalhadorporhora1.getNome() << "\n" << "Salário mensal: " << trabalhadorporhora1.calcularPagamentoMensal(50) << endl;//2000+extra


    return 0;
}
