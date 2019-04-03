#include <stdio.h>
#include <stdlib.h>

int recursividade(int n);

int main(){
    int n, num, cont = 1;
    scanf("%d", &n);
    while(n != 0){
        num = recursividade(n);
        printf("Teste %d\n", cont);
        printf("%d\n", num);
        printf("\n");
        scanf("%d", &n);
        cont++;
    }

return 0;
}

int recursividade(int n){
    int movi = 1;

    for (int i = 0; i < n; i++){
        movi *= 2;
    }
    movi -= 1;    
return movi;
}