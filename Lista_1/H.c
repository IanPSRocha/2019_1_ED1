#include <stdio.h>
#include <string.h>

int main(){
    int n, tamanho = 0, teste;
    char string[1005], maior[1005];
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        scanf("%s", string);
        teste = strlen(string);
        if(teste > tamanho){
            tamanho = teste;
            for(int j = 0; j < 1005; j++){
                maior[j] = string[j];
            }
        }
    }
    printf("%s\n", maior);
return 0;
}