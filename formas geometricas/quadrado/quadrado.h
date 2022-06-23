#include <stdio.h>
#include <stdlib.h>

typedef struct quadrado Quadrado;
float getLado(Quadrado *q);
void setLado(Quadrado *q, float l);
float calculaArea(Quadrado *q);
float calculaPerimetro(Quadrado *q);