#include <stdio.h>
#include <stdlib.h>

typedef struct reg {
    char conteudo;
    struct reg *prox;
}celula;

celula *cabeca;

void criapilha();
int pilha_vazia();
void empilha(char x);
char desempilha();
int verifica(char *expo);
void esvazia();

int main(){
    criapilha();
    char expo[505];
    scanf("%s", expo);

    if(verifica(expo)){
        printf("sim\n");
    }
    else{
        printf("nao\n");
    }

    esvazia();
return 0;
}

void criapilha(){
    cabeca = malloc(sizeof(celula));
    cabeca->prox = NULL;
}

void empilha(char x){
    celula *nova;
    nova = malloc(sizeof(celula));
    nova->conteudo = x;
    nova->prox = cabeca->prox;
    cabeca->prox = nova;
}

char desempilha(){
    if(!pilha_vazia()){
        celula *lixo;
        lixo = cabeca->prox;
        char y = lixo->conteudo;
        cabeca->prox = lixo->prox;
        free(lixo);
        return y;
    }
    else{
        return '\0';
    }
}

int pilha_vazia(){
    return cabeca->prox == NULL;
}

int verifica(char *expo){
    for(int i = 0; expo[i] != '\0'; i++){
        if(expo[i] == '(' || expo[i] == '[' || expo[i] == '{'){
            empilha(expo[i]);
        }
        else{
            if(expo[i] == ')' && desempilha() != '('){
                return 0;
            }
            if(expo[i] == ']' && desempilha() != '['){
                return 0;
            }
            if(expo[i] == '}' && desempilha() != '{'){
                return 0;
            }
        }
    }
    if(pilha_vazia()){
        return 1;
    }
    else{
        return 0;
    }
}

void esvazia(){
    celula *lixo, *prox;
    prox = cabeca->prox;
    while(prox != NULL){
        lixo = prox;
        prox = lixo->prox;
        free(lixo);
    }
}