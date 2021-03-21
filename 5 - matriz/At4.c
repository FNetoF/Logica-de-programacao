#include <stdio.h>

int main(){
    int matriz[4][4], i, j, result;

    //preenhendo a matriz
    printf("Informe 16 valores para carregar a matriz 4x4\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("Informe o valor da posicao %dx%d: ", i, j);
            scanf("%d", &matriz[i][j]);
        }
    }
    
    //Localizando os valores maiores do que 10
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            if (matriz[i][j] >= 10) {
                result++;
            }
        }
    }

    //Imprimindo valores maioes do que 10
    printf("Valores > 10: %d\n", result);
    return 0;
}

