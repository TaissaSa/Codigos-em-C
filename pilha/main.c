#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

int main(int argc, char *argv[]) {
	Pilha *pilha = create(3);
	
	printf("\n%d\n", add(pilha, 225));
	printf("\n%d\n", add(pilha, 349));
	printf("\n%d\n", add(pilha, 157));
	
	return 0;
}
