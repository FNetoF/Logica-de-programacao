#include <stdio.h>

int main(){
    int matriz[4][4], i, j, maiorI = 0, maiorJ = 0, maior;

    //preenhendo a matriz
    printf("Informe 16 valores para carregar a matriz 4x4\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //Imprimindo matriz
    maior = matriz[0][0];
    printf("\nExibindo a matriz informada \n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf(" %d  ", matriz[i][j]);
            //Localizando o maior valor na matriz
            if(matriz[i][j] > maior) {
                maior = matriz[i][j];
                maiorI = i;
                maiorJ = j;
            }
        }
        printf("\n");
    }
    printf("\nA localizacao do maior valor eh: %dx%d\n", maiorI, maiorJ);
    return 0;
}

