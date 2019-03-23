#include <stdio.h>

int main(){
    int cont = 0, n;
    for(int i = 0; i != EOF; i++){
        scanf("%d", &n);
        cont++;
    }
    printf("%d\n", cont);
return 0;
}