#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

int main(int argc, char *argv[]) {
	Fila *fila = create(2);
	
	add(fila, 347);
	add(fila, 898);

	return 0;
}
