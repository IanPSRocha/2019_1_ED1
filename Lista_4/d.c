#include <stdio.h>
#include <stdlib.h>

int main(){
    int n, m;
    scanf("%d", &n);

    int v[n];
    for(int i = 0; i < n; i++){
        scanf("%d", &v[i]);
    }

    scanf("%d", &m);

    int r[m];
    for(int j = 0; j < m; j++){
        scanf("%d", &r[j]);
    }

    int total = n - m;
    int s[total];

    for(int x = 0; x < n; x++){
        for(int z = 0; z < m; z++){
            if(v[x] == r[z]){
                v[x] = 0;
            }
        }
    }

    int y = 0;
    for(int a = 0; a < n; a++){
        if(v[a] != 0){
            s[y] = v[a];
            y++;
        }
    }

    for(int w = 0; w < total; w++){
        if(w != total-1){
            printf("%d ", s[w]);
        }
        else{
            printf("%d\n", s[w]);
        }
    }
return 0;
}