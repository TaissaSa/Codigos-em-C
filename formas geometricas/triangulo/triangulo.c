#include <stdio.h>
#include <stdlib.h>
#include "triangulo.h"
struct triangulo
{
    float lado1;
    float lado2;
    float altura;
    float base;
 
};
float getLado1(Triangulo *triangulo){
    return triangulo->lado1;
}
float getLado2(Triangulo *triangulo){
    return triangulo->lado2;
}
float getAltura(Triangulo *triangulo){
    return triangulo->altura;
}
float getBase(Triangulo *triangulo){
    return triangulo->base;
}
float setLado1(Triangulo *triangulo, float lado){
    triangulo->lado1 = lado;
}
float setLado2(Triangulo *triangulo, float lado){
    triangulo->lado2 = lado;
}
float setBase(Triangulo *triangulo, float b){
    triangulo->base = b;
}
float setAltura(Triangulo *triangulo, float alt){
    triangulo->altura = alt;
}
float perimetroTriangulo(Triangulo *triangulo){
    return triangulo->lado1 + triangulo->lado2 + triangulo->base;
}
float areaTriangulo(Triangulo *triangulo){
    return getAltura(triangulo)*getBase(triangulo)/2;
}
void descobreTipoTriangulo(Triangulo *triangulo){
    if(!((-1)*(triangulo->lado1 - triangulo->lado1) < triangulo->base &&
       (-1)*(triangulo->base - triangulo->lado1) < triangulo->lado2 &&
       (-1)*(triangulo->base - triangulo->lado2) < triangulo->lado1 &&
       (triangulo->lado1 + triangulo->lado2) > triangulo->base &&
       (triangulo->lado1 + triangulo->base) > triangulo->lado2 &&
       (triangulo->base + triangulo->lado2) > triangulo->lado1
       )){
        printf(" o triangulo nao existe");
        return;
       }
    if(triangulo->base == triangulo->lado1 && triangulo->lado2 == triangulo->lado1){
        printf("o triangulo e equilatero \n");
    }
    if((triangulo->lado1 != triangulo->lado2) && (triangulo->base != triangulo->lado2) && (triangulo->base != triangulo->lado1)){
        printf("o triangulo e escaleno \n");
    }if((triangulo->lado1 == triangulo->lado2 && triangulo->lado1 != triangulo->base ) ||
        (triangulo->base == triangulo->lado2 && triangulo->lado1 != triangulo->base ) ||
        (triangulo->lado1 == triangulo->base && triangulo->lado2 != triangulo->base )){
        printf("o triangulo e isosceles");
    }
 
 
}
 
 