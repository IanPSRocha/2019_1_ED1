#include <stdio.h>

int main(){
    int n, contA = 0, contB = 0;
    scanf("%d", &n);
    int resul;
    while(n > 0){
        for(int i = 0; i < n; i++){
          scanf("%d", &resul);
            if(resul == 0){
                contA++;
            }
            if(resul == 1){
                contB++;
            }
        }
        printf("Alice ganhou %d e Beto ganhou %d\n", contA, contB);
        scanf("%d", &n);
        contA = 0;
        contB = 0;
    }
return 0;
}