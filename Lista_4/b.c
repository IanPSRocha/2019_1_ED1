#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, soma = 0, somaux = 0, aux;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    for(int i = 0; i < n; i++){
        soma += v[i];
    }
    soma = soma / 2;

    for(int i = 0; i < n; i++){
        somaux += v[i];
        if(somaux == soma){
            aux = i;
            aux++;
            break;
        }
    }

    printf("%d\n", aux);
return 0;
}