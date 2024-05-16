#include <stdio.h>

int main(){
    int v[20];
    int u[20];
    int i,n,printador,total;
    printf("quantos componentes tem o seu vetor???\n");
    scanf("%d", &n);
    printf("digite os componentes do primeiro vetor\n");
    for(i=0;i<n;i++){
        scanf("%d", &v[i]);
    }
    printf("digite os componentes do segundo vetor\n");
    for(i=0;i<n;i++){
        scanf("%d", &u[i]);
    }
    for(i=0;i<n;i++){
        printador =v[i] * u[i];
        total = total + printador;
    }
    printf("o produto vetorial eh %d", total);
   return 0;
}
