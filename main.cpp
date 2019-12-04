#include <iostream>
#include <string>
#include "Pessoa.h"
#include "Endereco.h"

using namespace std;

int main()
{
    Pessoa objeto1 = Pessoa("Daniel", Endereco(), "998354294\n");
    Endereco endereco1 = Endereco("PARAIBA","JOAO PESSOA","MANGABEIRA","RUA DERZU","CEP 00000", 71);
    cout << "Nome: " << objeto1.getNome() << "\nTelefone: " << objeto1.getTelefone();
    cout << "Endereco Completo:\n" << endereco1.toString();
}
