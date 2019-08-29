#include <stdio.h>
#include <stdlib.h>

int main(){
int n, nota[200],mnota,mfrequencia;
mnota=mfrequencia=0;
scanf("%d",&n);
for (int i = 0; i < n; i++) {
  scanf("%d",&nota[i]);
}

for (int i = 1,f; i < n; i++) {
  f=0;
  while(nota[i-1] == nota[i] && i < n)
        {
            f++;
            i++;
}
        if(mfrequencia <= f && f > 0)
        {
            mfrequencia = f;
            mnota = nota[i-1];
        }
        else if(mfrequencia == 0)
        {
            mnota = nota[i];
        }
}
printf("%d\n", mnota);
    return 0;
}