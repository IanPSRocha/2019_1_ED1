#include <stdio.h>
#include <stdlib.h>

int main(){
    int n;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    int aux[n];
    for(int i = 0; i < n; i++){
        int repet = 0;
        for(int j = 0; j < n; j++){
            if(j == i){
                aux[i] = v[i];
            }
            if(aux[i] == v[n]);
            
        }
    }
return 0;
}