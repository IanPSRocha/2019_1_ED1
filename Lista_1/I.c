#include <stdio.h>
#include <string.h>

int main(){
    int cont = 0;
    char string[102];
    while(fgets(string, 102, stdin) != NULL){
        for(int i = 0; i < strlen(string); i++){
            if(string[i] == 111){
                cont++;
            }
        }
    }
    printf("%d\n", cont);
return 0;
}