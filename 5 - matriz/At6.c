#include <stdio.h>
#include <stdlib.h>

int main(){
    int matriz[5][5], i, j, x=0;

    //preenhendo a matriz
    printf("Informe 25 valores para carregar a matriz 5x5\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }

    //Lendo o valor de x
    printf("Informe o valor X para ser encontrado na matriz 5x5\n");
    scanf("%d", &x);

    //localizando o x
    for(i = 0; i < 5; i++) {
        for(j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                printf("\nA localizacao do %d eh: %dx%d\n", x, i, j);
                exit(0);
            }
        }      
    }

    if(matriz[i][0] != x) {
        printf("Nao encontrado\n");
        exit(0);
    }
    return 0;
}

