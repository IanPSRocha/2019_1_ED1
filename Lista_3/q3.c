#include <stdio.h>
#include <stdlib.h>

void hm(int min,int *h,int *m);


int main(){
    int min, h = 0, m;

    printf("Digite a quantidade de Minutos:\n");
    scanf("%d", &min);

    hm(min, &h, &m);

    printf("%d horas e %d minutos\n", h, m);

return 0;
}

void hm(int min,int *h,int *m){
    while(min >= 60){
        *h += 1;
        min -= 60;
    }
    *m = min;
}