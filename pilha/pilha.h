#include <stdio.h>
#include <stdlib.h>

typedef struct pilha Pilha;

Pilha* create(int n);

int add(Pilha *pilha, int e);

int pop(Pilha *pilha);

int size(Pilha *pilha);

int top(Pilha *pilha);

int bottom(Pilha *pilha);

int find(Pilha *pilha, int e);

int isFull(Pilha *pilha);

int isEmpty(Pilha *pilha);

void clear(Pilha *pilha);