#include <stdio.h>
#include <stdlib.h>
 
typedef struct triangulo Triangulo;
float perimetroTriangulo(Triangulo *triangulo);
float areaTriangulo(Triangulo *triangulo);
void descobreTipoTriangulo(Triangulo *triangulo);
float getLado1(Triangulo *triangulo);
float getLado2(Triangulo *triangulo);
float getAltura(Triangulo *triangulo);
float getBase(Triangulo *triangulo);
float setLado1(Triangulo *triangulo, float lado);
float setLado2(Triangulo *triangulo, float lado);
float setBase(Triangulo *triangulo, float b);
float setAltura(Triangulo *triangulo, float alt);
 