#ifndef TRABALHADOR_H
#define TRABALHADOR_H
#include <string>
#include <iostream>
using namespace std;

class Trabalhador
{
    public:
        Trabalhador();
        Trabalhador(string, double);
        virtual ~Trabalhador();
        string getNome();
        string getSalario();
        void setNome(string);
        void setSalario(double);
    protected:
        string Nome;
        double Salario;
    private:
};

#endif // TRABALHADOR_H
