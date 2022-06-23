#include <stdio.h>
#include <stdlib.h>
#include "retangulo.c"

int main(){
    Retangulo *r;
    setLadoHorizontal(r, 2);
    setLadoVertical(r, 4);
    printf(" %f \n", calculaArea(r));
    printf(" %f \n", calculaPerimetro(r));

    return 0;
}