#include <stdio.h>
#include <string.h>

int main(){
    int cont = 0;
    char string[102];
    while(scanf("%[^\n]%*c", string) != EOF){
        for(int i = 0; i < 1005; i++){
            if(string[i] == 111){
                cont++;
            }
        }
    }
    printf("%d\n", cont);
return 0;
}