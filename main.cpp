#include <iostream>
#include "FiguraGeometrica.h"
#include "Triangulo.h"
#include "Circulo.h"
#include "Quadrado.h"
#include <string>
#include <locale.h>

using namespace std;

int main(){
    setlocale(LC_ALL,"Portuguese");
    Triangulo triangulo = Triangulo(2.5,2.0);
    Circulo circulo = Circulo(2,1.0);
    Quadrado quadrado = Quadrado(4);
    cout << "Área do triângulo: " << triangulo.calcularArea() << "m." << endl;
    cout << "Área do círculo: " << circulo.calcularArea() << "m." << endl;
    cout << "Área do quadrado: " <<quadrado.calcularArea() << "m." << endl;
    return 0;
}
