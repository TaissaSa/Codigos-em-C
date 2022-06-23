
#include <stdio.h>
#include <stdlib.h>

typedef struct fila Fila;

Fila* create(int n);

int add(Fila *fila, int e);

int pop(Fila *fila);

int size(Fila *fila);

int first(Fila *fila);

int last(Fila *fila);

int find(Fila *fila, int e);

int isFull(Fila *fila);

int isEmpty(Fila *fila);

void clear(Fila *fila);

