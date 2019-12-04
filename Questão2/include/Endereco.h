#ifndef ENDERECO_H
#define ENDERECO_H
#include <iostream>
#include <string>

using namespace std;


class Endereco
{
    public:
        Endereco();
        Endereco(string,string,string,string,string,int);
        string toString();
        string getRua();
        string getBairro();
        string getCidade();
        string getEstado();
        string getCEP();
        int getNumero();
        void setRua(string);
        void setBairro(string);
        void setCidade(string);
        void setEstado(string);
        void setCEP(string);
        void setNumero(int);

    protected:

    private:
        string Rua;
        string Bairro;
        string Cidade;
        string Estado;
        string CEP;
        int Numero;
};

#endif // ENDERECO_H
