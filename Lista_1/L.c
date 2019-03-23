#include <stdio.h>
#include <string.h>

int main(){
    int n;
    scanf("%d%*c", &n);
    char str[n][50];
    int tamanho[n];

    for(int i = 0; i < n; i++){
        scanf("%s%*c", str[i]);
        tamanho[n] = strlen(str[i]);
        for(int j = 0; j < tamanho[n]; j++){
            if(str[i][j] <= 90){
                str[i][j] += 32;
            }
        }

        }
    }

    
    /*for(int z = 0; z < n; z++){
        printf("%s\n", str[z]);
    }*/
return 0;
}