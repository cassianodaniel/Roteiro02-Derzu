#ifndef FUNCIONARIO_H
#define FUNCIONARIO_H
#include <string>

using namespace std;

class Funcionario
{
    public:
        Funcionario();
        Funcionario(string,string,double);
        string getNome();
        string getMatricula();
        double getSalario();
        void setNome(string);
        void setMatricula(string);
        void setSalario(double);
        string toString();
    protected:
        string Matricula;
        string Nome;
        double Salario;
};

#endif // FUNCIONARIO_H
