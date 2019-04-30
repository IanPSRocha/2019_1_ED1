#include <stdio.h>
#include <stdlib.h>

int main(){
    int aero, voo, teste = 1;
    scanf("%d %d", &aero, &voo); // Lendo Numero de aeroportos e voos

    while(aero != 0 && voo != 0){  
        int ori[voo], des[voo], freq[aero];
        for(int i = 0; i < voo; i++){ // Preenchendo o voos com origem e destino
            scanf("%d %d", &ori[i], &des[i]);
        }

        for(int i = 0; i < aero; i++){ // Zerando um vetor auxiliar de frequencia
            freq[i] = 0;
        }

        for(int i = 0; i < aero; i++){ // Para cada vez que um aeroporto for mencionado(ori/des), aumenta sua frequencia +1
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
        for(int i = 0; i < aero; i++){ // Descobrir qual o maior numero de frequencia
            if(freq[i] > maior){
                maior = freq[i];
            }
        }

        int aux[102], y = 0; // Vetor auxiliar para armazenar posição dos aeroportos com maior frequencia

        for(int i = 0; i < 102; i++){ // Zerando vetor auxiliar
            aux[i] = 0;
        }

        for(int i = 0; i < aero; i++){ // Salvando os indices do vetor frequencia daqueles que tem a maior freq
            if(freq[i] == maior){
                aux[y] = i + 1;
                y++;
            }
        }

        printf("Teste %d\n", teste);
        for(int i = 0; i < 102; i++){
            if(aux[i] != 0){
                if(aux[i+1] == 0){
                    printf("%d", aux[i]);
                }
                else{
                    printf("%d ", aux[i]);
                }
            }
        }
        printf("\n\n");   
        teste++;
        scanf("%d %d", &aero, &voo);
    }
return 0;
}