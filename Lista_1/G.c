#include <stdio.h>
#include <string.h>

int main(){
    int n, tamanho = 0, teste;
    char string[1005];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", string);
        teste = strlen(string);
        if(teste >= tamanho){
            tamanho = teste;
        }
    }
    printf("%d\n", tamanho);
return 0;
}