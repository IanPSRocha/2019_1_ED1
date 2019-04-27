#include <stdio.h>
#include <stdlib.h>

int main(){
    int aero, voo, teste = 1;
    scanf("%d %d", &aero, &voo);

    while(aero != 0 && voo != 0){  
        int ori[voo], des[voo], freq[aero];
        for(int i = 0; i < voo; i++){
            scanf("%d %d", &ori[i], &des[i]);
        }

        for(int i = 0; i < aero; i++){
            freq[i] = 0;
        }

        for(int i = 0; i < aero; i++){
            for(int j = 0; j < voo; j++){
                if((ori[j] - 1) == i){
                    freq[i]++;
                }
                if((des[j] - 1) == i){
                    freq[i]++;
                }
            }
        }

        int maior = 0;
        for(int i = 0; i < aero; i++){
            if(freq[i] > maior){
                maior =;
            }
        }


        printf("Teste %d\n", teste);
        printf("%d");
        printf("\n");   
        teste++;
        scanf("%d %d", &aero, &voo);
    }
return 0;
}