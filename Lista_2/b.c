#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int recursividade(int n);

int main(){
    int n, resul;
    scanf("%d", &n);
    while(n != 0){
        resul = recursividade(n);
        printf("f91(%d) = %d\n", n, resul);
        scanf("%d", &n);
    }
return 0;
}

int recursividade(int n){
    int resul;
    if(n <= 100){
        resul = recursividade( recursividade (n + 11));
    }
    else{
        resul = n - 10;
    }
return resul;
}