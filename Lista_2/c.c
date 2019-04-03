#include <stdio.h>

int grau9(long long int n);

int main(){
    unsigned long long int n, resul, grau;
    scanf("%lld", &n);
    printf("%lld\n", n);
    while(n != 0){
        if(n % 9 == 0){
            grau = grau9(n);
            printf("%lld is a multiple of 9 and has 9-degree %lld.\n", n, grau);
        }
        else{
            printf("%lld is not a multiple of 9.\n", n);
        }

        scanf("%lld", &n);
    }
return 0;
}

int grau9(long long int n){
    int grau = 0;
    if(n == 9){
        return 1;
    }
    else{
        grau += grau9(n / 10);
        return grau;
    }
}