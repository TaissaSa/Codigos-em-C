#include <stdio.h>
#include <stdlib.h>
#include "triangulo.c"
 
int main(){
    Triangulo *triangulo;
    setAltura(triangulo, 4);
    setBase(triangulo, 3);
    setLado1(triangulo, 5);
    setLado2(triangulo, 5);
    printf(" perimetro = %f \n", perimetroTriangulo(triangulo));
    printf(" area do triangulo %f \n", areaTriangulo(triangulo));
 
 
    descobreTipoTriangulo(triangulo);

    return 0;
}