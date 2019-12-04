#include <iostream>
#include "Funcionario.h"
#include "Consultor.h"
#include <string>
#include <locale.h>

using namespace std;

int main(){
setlocale(LC_ALL, "Portuguese");

    Funcionario funcionario1 = Funcionario("Funcionario Daniel", "10000", 30000.00);
    Consultor consultor1 = Consultor("Consultor Antonio", "10001", 50000.00);
    cout << consultor1.toString() << endl;
    cout << funcionario1.toString() << endl;
    cout << "Salário(+30% (Consultor.getSalario(30)) obtido pela getSalario(30): " << consultor1.getSalario(30) << endl;
    cout << "Salário(+10% (Consultor.getSalario()) obtido pela getSalario(): " << consultor1.getSalario() << endl;
    cout << "Salário obtido pela getSalario(): " << funcionario1.getSalario() << endl;
    cout << "\nTestes de métodos get individuais a seguir:\n" << endl;
    cout << consultor1.getNome() << "/" << consultor1.getMatricula() << "/" << consultor1.getSalario() << endl;
    cout << funcionario1.getNome() << "/" << funcionario1.getMatricula() << "/" << funcionario1.getSalario() << endl;


    return 0;
}
