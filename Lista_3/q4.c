#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void concat(char *resul, char *str);

int main(){

    char *string1, *string2, resul;

    string1 = (char *) malloc(100 * sizeof(char));
    string2 = (char *) malloc(100 * sizeof(char));
    resul = (char *) malloc(200 * sizeof(char));

    printf("Digite a String número 1:\n");
    scanf("%s%*c", string1);
    printf("Digite a String número 2:\n");
    scanf("%s%*c", string2);

    resul = '\0';

    concat(resul, string1);
    concat(resul, string2);

    printf("%s\n", resul);
return 0;
}

void concat(char *resul, char *str){
    char *p; 

    p = resul+strlen(resul); 
    while (*str){ 
        *p = *str; 
        p++; 
        str++; 
    } 
    *p = '\0'; 
}