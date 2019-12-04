#include "FiguraGeometrica.h"
#include <string>

using namespace std;

FiguraGeometrica::FiguraGeometrica()
{
    this->Nome = "Nome não definido.";
}

string FiguraGeometrica::getNome(){
    return this->Nome;
}

void FiguraGeometrica::setNome(string nome){
    this->Nome = nome;
}
