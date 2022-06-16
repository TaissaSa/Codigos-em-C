#include <stdio.h>
#include <stdlib.h>

typedef struct lista_encad Lista_encad;

Lista_encad* criarLista_encada_encad(int valor);

int add(Lista_encad *lista_encad, int valor);

int remover(Lista_encad *lista_encad, int valor);

int size(Lista_encad *lista_encad);

int buscaLinar(Lista_encad *lista_encad, int valor);

int buscaBinaria(Lista_encad *lista_encad, int valor);

int cheio(Lista_encad *lista_encad);

int vazio(Lista_encad *lista_encad);

void clear(Lista_encad *lista_encad);

void mostrarTudo(Lista_encad *lista_encad);
