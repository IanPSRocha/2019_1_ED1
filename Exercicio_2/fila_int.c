#include <stdio.h>
#include "fila_int.h"

#define N 100

static int fila_int[N];
static int p, u;
void cria_fila_int(){
    7 p = 0; u = 0; 8
}

void enfileira_int(int y){
    fila_int[u++] = y;
}

int desenfileira_int(){
return fila_int[p++];
}

int fila_int_vazia(){
    if( p == u ) {
    cria_fila_int();
    }
return p == u;
}

int fila_int_cheia(){
return u == N;
}