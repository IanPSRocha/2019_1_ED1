#include <stdio.h>
#include <stdlib.h>
#include "fila_int.h"

void acessaMenu();
void menu();
void opcao1();
void opcao2();
void opcao3();
void opcao4();

int main(){
    cria_fila_int();
    fila_int_vazia();
    acessaMenu();
return 0;
}

void menu(){
    printf("=======================================================\n");
    printf(">>>>>>>>>>>>>>>>>>> EXERCÍCIO 02 <<<<<<<<<<<<<<<<<<<<<<\n");
    printf("=======================================================\n");
    printf("\t Por favor selecione a opção desejada:\n");
    printf(" (1) Inserir elementos na fila\n");
    printf(" (2) Remover elementos da fila\n");
    printf(" (3) Reiniciar a fila\n");
    printf(" (4) Imprimir a Fila\n");
    printf(" (5) Sair\n");
    printf("=======================================================\n");
    printf("Digite a opção:");
}

void acessaMenu(){
    char opcao = '0';
    menu();
    while(opcao != '5'){
        scanf(" %c", &opcao);
        switch(opcao){
            case '1':
                opcao1();
                menu();
                break;
            case '2':
                opcao2();
                menu();
                break;
            case '3':
                opcao3();
                menu();
                break;
            case '4':
                opcao4();
                menu();
                break;
            case '5':
                system("clear");
                break;
            default:
                printf("\nEntrada Inválida, digite novamente: ");
        }
    }
}

void opcao1(){
    int quant, elemento;

    printf("Digite quantos elementos você deseja inserir:\n");
    scanf("%d", &quant);
    printf("Digite a seguir, os elementos a serem inseridos:\n");

    for(int i = 1; i <= quant; i++){
        printf("Elemento (%d): ", i);
        scanf("%d", &elemento);
        while(elemento > 999 || elemento < 0){
            printf("Elemento inválido, digite novamente:\n");
            printf("Elemento (%d): ", i);
            scanf("%d", &elemento);
        }
        enfileira_int(elemento);
    }
    system("clear");
}

void opcao2(){
    int quant, elemento;

    printf("Digite quantos elementos você deseja remover:\n");
    scanf("%d", &quant);
    system("clear");
    if(fila_int_vazia()){
        printf("A fila está vazia!!\n");
    }
    else{
        for(int i = 0; i < quant; i++){
            if(fila_int_vazia()){
                printf("Impossível remover mais elementos, a fila está vazia!!\n");
                break;
            }
            else{
                elemento = desenfileira_int();
                printf("Elemento removido: %d\n", elemento);
            }
        }
    }
}

void opcao3(){
    cria_fila_int();
    for(int i = 0; i < 10; i++){
        enfileira_int(0);
    }
    cria_fila_int();
    system("clear");
    printf("Fila Reinicializada!!\n\n\n");
}

void opcao4(){
    system("clear");
    print_fila();
}