#include <stdio.h>
#include <stdlib.h>
#include "retangulo.h"
 
struct retangulo
{
    float ladoHorizontal;
    float ladoVertical;
};
float getLadoHorizontal(Retangulo *r, float l){
    return r->ladoHorizontal;
}
float getLadoVertical(Retangulo *r, float l){
    return r->ladoVertical;
}
float setLadoVertical(Retangulo *r, float l){
    r->ladoVertical = l;
}
float setLadoHorizontal(Retangulo *r, float l){
    r->ladoHorizontal = l;
}
float calculaArea(Retangulo *r){
    return r->ladoHorizontal*r->ladoVertical;
}
float calculaPerimetro(Retangulo *r){
    return r->ladoHorizontal*2 + r->ladoVertical*2;
}
 
 