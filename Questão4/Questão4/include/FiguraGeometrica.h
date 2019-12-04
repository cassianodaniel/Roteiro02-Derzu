#ifndef FIGURAGEOMETRICA_H
#define FIGURAGEOMETRICA_H
#include <string>

using namespace std;

class FiguraGeometrica
{
    public:
        FiguraGeometrica();
        virtual double calcularArea() = 0;
        void setNome(string);
        string getNome();

    protected:
        string Nome;
};

#endif // FIGURAGEOMETRICA_H
