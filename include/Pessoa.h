#ifndef PESSOA_H
#define PESSOA_H
#include <string>
#include <iostream>
#include "Endereco.h"

using namespace std;

class Pessoa
{
    public:
        Pessoa();
        Pessoa(string);
        Pessoa(string, Endereco, string);
        string getNome();
        Endereco getEndereco();
        string getTelefone();
        void setNome(string);
        void setEndereco(Endereco);
        void setTelefone(string);

    protected:

    private:
        string Nome;
        Endereco vEndereco;
        string Telefone;
};

#endif // PESSOA_H
