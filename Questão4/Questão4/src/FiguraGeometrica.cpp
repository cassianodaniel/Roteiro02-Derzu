#include "FiguraGeometrica.h"
#include <string>

using namespace std;

FiguraGeometrica::FiguraGeometrica()
{
    this->Nome = "Nome n�o definido.";
}

string FiguraGeometrica::getNome(){
    return this->Nome;
}

void FiguraGeometrica::setNome(string nome){
    this->Nome = nome;
}
