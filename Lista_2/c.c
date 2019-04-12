#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>

int soma(char *string, int grau);

int main(){
    char num[1000];
    scanf("%s", num);

    while(num[0] != '0'){
        int grau = soma(num, 1);

        if(grau == -1){
            printf("%s is not a multiple of 9.\n", num);
        }
        else{
            printf("%s is a multiple of 9 and has 9-degree %d\n", num, grau);
        }

        scanf("%s", num);
    }
return 0;
}

int soma(char *string, int grau){
    int soma = 0;
    int tamanho = strlen(string);
    for(int i = 0; i < tamanho; i++){
        soma += string[i] - 48;
    }

    if(soma < 9){
        return -1;
    }

    if(soma > 9){
        char aux[1000];
        sprintf(aux, "%d", soma);
        return soma*(aux, grau+1);
    }
    return grau;
}