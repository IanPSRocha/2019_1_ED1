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
int verifica(char *exp);

int main(){
    criapilha();
    char exp[502];
    scanf("%s", exp);

    if(verifica(exp)){
        printf("sim\n");
    }
    else{
        printf("nao\n");
    }
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
    celula *lixo;
    lixo = cabeca->prox;
    char y = lixo->conteudo;
    cabeca->prox = lixo->prox;
    free(lixo);
    return y;
}

int pilha_vazia(){
    return cabeca->prox == NULL;
}

int verifica(char *exp){
    for(int i = 0; exp[i] != '\0'; i++){
        if(exp[i] == '(' || exp[i] == '[' || exp[i] == '{'){
            empilha(exp[i]);
        }
        else{
            if(exp[i] == ')' && desempilha() != '('){
                return 0;
            }
            if(exp[i] == ']' && desempilha() != '['){
                return 0;
            }
            if(exp[i] == '}' && desempilha() != '{'){
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