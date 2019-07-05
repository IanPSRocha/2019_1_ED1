#include <stdio.h>
#include <stdlib.h>

#define N 505

char pos[N];
int q = 0;

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
void converte(char *expo);
int prioridade(char n);

int main(){
    criapilha();
    char expo[505];
    scanf("%s", expo);

    if(verifica(expo)){
        converte(expo);
        for(int i = 0; pos[i] != '\0'; i++){
            printf("%c", pos[i]);
        }
        printf("\n");
    }
    else{
        printf("incorretamente parentizada\n");
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

void converte(char *expo){
    for(int i = 0; expo[i] != '\0'; i++){
        if(expo[i] >= 65 && expo[i] <= 90){
            pos[q] = expo[i];
            q++;
        }
        else{
            if(expo[i] == '('){
                empilha(expo[i]);
            }
            else{
                if(expo[i] == ')'){
                    char op = desempilha();
                    while(op != '('){
                        pos[q] = op;
                        q++;
                        op = desempilha();
                    }
                }
                else{
                    char t = desempilha();
                    if(prioridade(expo[i]) == 3){
                        empilha(t);
                        empilha(expo[i]);
                    }
                    else{
                        if(prioridade(expo[i]) > prioridade(t)){
                            empilha(t);
                            empilha(expo[i]);
                        }
                        else{
                            while(prioridade(expo[i]) <= prioridade(t)){
                                pos[q] = t;
                                q++;
                                t = desempilha();
                            }
                            empilha(t);
                            empilha(expo[i]);
                        }
                    }
                }
            }
        }
    }
    while(!pilha_vazia()){
        pos[q] = desempilha();
        q++;
    }
}

int prioridade(char n){
    switch(n){
        case '+':
            return 1;
            break;
        case '-':
            return 1;
            break;
        case '*':
            return 2;
            break;
        case '/':
            return 2;
            break;
        case '^':
            return 3;
            break;        
        default:
            return 0;
            break;
    }
}