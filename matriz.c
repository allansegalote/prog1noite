#include <stdio.h>
int main(){

int matA[3][3], matB[3][3], matC[3][3];
int i, j;

//ler matriz
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("Entre com o elemento %d-%d: ", i,j);
    scanf("%d", &matA[i][j]);

    }
}

//imprimir matriz
for(i=0;i<3;i++){
    for(j=0;j<3;j++){
    printf("%d ", matA[i][j]);
        if(j==2){printf("\n");}
    }
}


return 0;

}
