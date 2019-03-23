#include <stdio.h>

int main(){
    int n, contn = 0;
    scanf("%d", &n);
    contn++;
    int resul[n];
    int contA[n], contB[];
    while(n != 0){
        for(int i = 0; i < n; i++){
          scanf("%d", &resul[i]);
            if(resul[i] == 0){
                contA++;
            }
            if(resul[i] == 1){
                contB++;
            }
        }
        scanf("%d", &n);
        contn++;
    }
    for(int j = 0; j < numr; j++){
        printf("Alice ganhou %d e Beto ganhou %d\n", contA, contB);
    }
return 0;
}