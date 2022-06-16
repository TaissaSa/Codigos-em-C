#include <stdio.h>
#include <stdlib.h>
#include "lista_encadDPE.h"


int main(){

    Lista_encad lista_encad = create(6);
    insert(lista_encad, 20);
    insert(lista_encad, 40);
    insert(lista_encad, 60);

    printf("%d", linearSearch(lista_encad, 50));
    printf("%d", isFull(lista_encad));
    printf("%d", isEmpty(lista_encad));

    printAll(lista_encad); 
    clear(lista_encad);
    return 1;
}