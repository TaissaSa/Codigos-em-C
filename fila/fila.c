#include <stdio.h>
#include <stdlib.h>
#include "fila.h"

struct fila{
	int *data;
	int size; // quantidade de elementos no array
	int n; // tamanho do array
};

// Complexidade temporal O(1) ou O(c)
// Complexidade espacial O(n)
Fila* create(int n){
	Fila *fila = (Fila*) malloc(sizeof(Fila));
	fila->data = (int*) calloc(n, sizeof(int));
	fila->size = 0;
	fila->n = n;
	
	return fila;
}

// Complexidade temporal O(1)
// Complexidade espacial O(1)
int add(Fila *fila, int e){ 
	if(fila->size < fila->n){
		fila->data[fila->size++] = e;
		return 1;
	}
	
	return 0;
}

// Complexidade temporal O(n),
// Complexidade espacial O(n)
int pop(Fila *fila){
	if(fila->size > 0){
		int i = 0;
		int e = fila->data[0];
		int *aux_data = (int*) calloc(fila->n, sizeof(int));
		
		for(i = 0; i < fila->size-1; i++){
			aux_data[i] = fila->data[i+1];
		}
		
		free(fila->data);
		fila->data = aux_data;
		fila->size--; 
		return 1;
	}
	
	return 0;
}

// Complexidade temporal O(1)
// Complexidade espacial O(1)
int size(Fila *fila){
	return fila->size;
}

// Complexidade temporal O(1)
// Complexidade espacial O(1)
int first(Fila *fila){
	return fila->data[fila->size-1];
}

// Complexidade temporal O(1)
// Complexidade espacial O(1)
int last(Fila *fila){
	return fila->data[0];
}

// Complexidade temporal O(n)
// Complexidade espacial O(c)
int find(Fila *fila, int e){ //
	int x = 0;
	
	for(x = 0; x < fila->size; x++){
		if(fila->data[x] == e){
			return x;
		}
	}
	
	return -1;
}

// Complexidade temporal ? O(1)
// Complexidade espacial [n] O(1)
int isFull(Fila *fila){
	if(fila->size == fila->n) {
		return 1;
	}
	
	return 0;
}

// Complexidade temporal ? O(1), constante. Execute sempre o mesmo n?mero de opera??es.
// Complexidade espacial [n] O(1), o n?mero de bytes alocados n?o depende da entrada.
int isEmpty(Fila *fila){
	if(fila->size == 0)
		return 1;
		
	return 0;
}

// Complexidade temporal O(1)
// Complexidade espacial [n] O(1)
void clear(Fila *fila){
	if(fila->size > 0){
		fila->size = 0;
	}
}

