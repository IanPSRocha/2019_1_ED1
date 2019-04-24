#include <stdio.h>
#include <stdlib.h>

typedef int TipoFuncao(int a, int b);

TipoFuncao *VetordeFun[4];

int f1(int a, int b);
int f2(int a, int b);
int f3(int a, int b);
int f4(int a, int b);
void SelecFun(int op, TipoFuncao *PtrFun);

int main(){

    int a, b, op, resul;

    SelecFun(0, f1);
    SelecFun(1, f2);
    SelecFun(2, f3);
    SelecFun(3, f4);

    printf("Digite o valor A:\n");
    scanf("%d", &a);
    printf("Digite o valor B:\n");
    scanf("%d", &b);
    printf("Digite a operacão:\n");
    scanf("%d", &op);

    resul = (*VetordeFun[op])(a, b);

    printf("Resultado = %d\n", resul);
return 0;
}

void SelecFun(int op, TipoFuncao *PtrFun){
    VetordeFun[op] = PtrFun;
}

int f1(int a, int b){
    int resul;

    resul = a + b;

    return resul;
}

int f2(int a, int b){
    int resul;

    resul = a - b;

    return resul;
}

int f3(int a, int b){
    int resul;

    resul = a * b;

    return resul;

}

int f4(int a, int b){
    int resul;

    if(b == 0){
        printf("Impossível divisão por zero\n");
        exit(1);
    }

    resul = a / b;

    return resul;

}