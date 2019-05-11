#include <stdio.h>
#include "fila_int.h"

#define N 10

static int fila_int[N];
static int p, u;

void cria_fila_int(){
    p = 0; u = 0;
}

void enfileira_int(int y){
    fila_int[u++] = y;
}

int desenfileira_int(){
    printf("p = %d\n", p);
return fila_int[p++];
}

int fila_int_vazia(){
    printf(" p == u = %d\n", p == u);
    if( p == u ) {
    cria_fila_int();
    }
return p == u;
}

int fila_int_cheia(){
return u == N;
}

void print_fila(){
    printf("-------------------------------------------------------------\n|");
    for(int i = 0; i < N; i++){
        if(fila_int[i] == 0){
            printf(" xxx |");
        }
        else{
            printf(" %d |", fila_int[i]);
        }
    }
    printf("\n-------------------------------------------------------------\n");
}