#include <stdio.h>
#include <stdlib.h>
#include "quadrado.h"
struct quadrado
{
    float lado;
};
float getLado(Quadrado *q){
    return q->lado;
}
void setLado(Quadrado *q, float l){
    q->lado = l;
}
float calculaArea(Quadrado *q){
    return q->lado*q->lado;
}
float calculaPerimetro(Quadrado *q){
    return q->lado*4;
}
 