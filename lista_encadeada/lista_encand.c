#include <stdio.h>
#include <stdlib.h>
#include "lista_encadDPE.h"

struct lista_encad{
	int *inteiros;
	int size; 	
	int sizeVetor; 	
};

// Complexidade temporal O(1)
// Complexidade espacial T(n)
Lista_encad* criarLista_encad(int valor){
	Lista_encad lista_encad = (Lista_encad) malloc(sizeof(Lista_encad));

	lista_encad->inteiros = (int*) calloc(valor, sizeof(int));
	lista_encad->sizeVetor = valor;
	lista_encad->size = 0;
	
	return lista_encad;
}

// Complexidade temporal O(n)
// Complexidade espacial T(n)
int add(Lista_encad *lista_encad, int valor){ 
	if(lista_encad->size < lista_encad->sizeVetor)
    {
		if(lista_encad->size == 0)
        {
			lista_encad->inteiros[lista_encad->size] = valor;
		}
        else
        {
			int a = 0; 
            int b = 0; 
			
			while(y < lista_encad->size && lista_encad->inteiros[b] < valor)
            {
				b++;
            }
			for(a = lista_encad->size-1; a >= b; a--)
            {
				lista_encad->inteiros[a+1] = lista_encad->inteiros[a];
            }
			lista_encad->inteiros[b] = valor;
		}
		lista_encad->size++;
		return 1;
	}
	return 0;
}

// Complexidade espacial T(n)
// Complexidade temporal O(n)
int remover(Lista_encad *lista_encad, int valor){
	if(lista_encad->size > 0){
		int a = 0; 
        int b = 0; 
		
		while(b < lista_encad->size && lista_encad->inteiros[b] != valor)
        {
			b++;
        }
		for(a = b; a < lista_encad->size-1; a++)
        {
			lista_encad->inteiros[a] = lista_encad->inteiros[a+1];
        }
		lista_encad->size--;
		return 1;
	}
	return 0;
}

// Complexidade temporal O(1)
// Complexidade espacial T(n)
int size(Lista_encad *lista_encad){
	return lista_encad->size;
}

// Complexidade temporal O(n)
// Complexidade espacial T(n)
int buscaLinar(Lista_encad *lista_encad, int valor){
	int a = 0;
	
	for(a = 0; a < lista_encad->size; a++)
    {
		if(lista_encad->inteiros[a] == e)
        {
			return x;
		}
	}
	return -1;
}

// Complexidade espacial -> T(n)
// Complexidade temporal -> O(log n)
int buscaBinaria(Lista_encad *lista_encad, int e){

}

// Complexidade temporal O(1)
// Complexidade espacial T(n)
int cheio(Lista_encad *lista_encad){
	if(lista_encad->size == lista_encad->sizeVetor)
    {
		return 1;
    }
	return 0;
}

// Complexidade temporal O(1)
// Complexidade espacial T(n)
int vazio(Lista_encad *lista_encad){
	if(lista_encad->size == 0)
    {
		return 1;
    }
	return 0;
}

// Complexidade espacial T(n)
// Complexidade temporal O(n)
void clear(Lista_encad *lista_encad){
	if(lista_encad->size > 0)
    {
		free(lista_encad->inteiros);
		lista_encad->size = 0;
		lista_encad->inteiros = (int*) calloc(lista_encad->n, sizeof(int));
	}
}

// Complexidade espacial T(n)
// Complexidade temporal O(n)
void mostrarTudo(Lista_encad *lista_encad){
	if(lista_encad->size == 0)
    {
		return 0;
	}
    else
    {
		int a = 0;
		
		for(a = 0; a < lista_encad->size; a++)
        {
			printf("%d: %d\n", a, lista_encad->inteiros[a]);
        }
	}

}