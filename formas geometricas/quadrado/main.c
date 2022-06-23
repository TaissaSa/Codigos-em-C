#include <stdio.h>
#include <stdlib.h>
#include "quadrado.c"

int main(){
    Quadrado *q;
    setLado(q, 4);
    printf(" area = %f \n", calculaArea(q));
    printf(" perimetro = %f \n", calculaPerimetro(q));
 
   return 0;
}
 