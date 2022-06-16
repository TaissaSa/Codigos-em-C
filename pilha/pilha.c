#include <stdio.h>
#include <stdlib.h>
#include "pilha.h"

struct pilha{
	int *data;
	int size;
	int n;
};

// Complexidade temporal é O(1), constante.
// Complexidade espacial: O(n).
Pilha* create(int n){
	Pilha *pilha = (Pilha*) malloc(sizeof(Pilha));
	pilha->data = (int*) calloc(n, sizeof(int));
	pilha->size = 0;
	pilha->n = n;
	
	return pilha;
}

// Complexidade temporal é O(1), constante
// Complexidade espacial [n + 4] O(1).
int add(Pilha *pilha, int e){ 
	if(pilha->size < pilha->n){
		pilha->data[pilha->size++] = e;
		return 1;
	}
	
	return 0;
}

// Complexidade temporal é O(1), constante.
// Complexidade espacial [n] O(1), o número de bytes alocados não depende da entrada.
int pop(Pilha *pilha){
	if(pilha->size > 0){
		pilha->size--; 
		return 1;
	}
	
	return 0;
}

// Complexidade temporal é O(1), constante.
// Complexidade espacial [n] O(1).
int size(Pilha *pilha){
	return pilha->size;
}

// Complexidade temporal é O(1), constante.
// Complexidade espacial [n] O(1).
int top(Pilha *pilha){
	return pilha->data[pilha->size-1];
}

// Complexidade temporal é O(1), constante.
// Complexidade espacial [n] O(1).
int bottom(Pilha *pilha){
	return pilha->data[0];
}

// Complexidade temporal é O(n), linear. 
// Complexidade espacial O(c).
int find(Pilha *pilha, int e){ //
	int x = 0;
	
	for(x = 0; x < pilha->size; x++){
		if(pilha->data[x] == e){
			return x;
		}
	}
	
	return -1;
}

// Complexidade temporal é O(1), constante.
// Complexidade espacial [n] O(1).
int isFull(Pilha *pilha){
	if(pilha->size == pilha->n)
		return 1;
	
	return 0;
}

// Complexidade temporal é O(1), constante. 
// Complexidade espacial [n] O(1).
int isEmpty(Pilha *pilha){
	if(pilha->size == 0){
		return 1;
	}
		
	return 0;
}

// Complexidade temporal é O(1), constante.
// Complexidade espacial [n] O(1).
void clear(Pilha *pilha){
	if(pilha->size > 0){
		pilha->size = 0;
	}
}
