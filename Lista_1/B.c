#include <stdio.h>

int main(){
    int cont, n;
    scanf("%d", &n);

    for(int i = 0; i < n; i++){
        if(i % 2 == 0){
            printf("THUMS THUMS THUMS\n");
        }
        else{
            printf("THUMS THUMS THUMS THUMS THUMS THUMS\n");
        }
    }
return 0;
}