#include <stdio.h>

int main(){
    int horas, minutos, segundos;
    int resuls, resulh, resulm, res = 0;
    char p1, p2;

    while(scanf("%d%c%d%c%d", &horas, &p1, &minutos, &p2, &segundos) != EOF){

        resulh = (24 - horas) - 1;
        resulm = (60 - minutos) - 1;
        resuls = (60 - segundos);

        res = resuls + (resulm * 60) + (resulh * 3600);

        printf("%d\n", res);
    }
return 0;
}