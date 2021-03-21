#include <stdio.h>

int main(){
    int matriz[5][5], i, j;

    //preenhendo a matriz
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if(i == j) {
                matriz[i][j] = 1;
            }else {
                matriz[i][j] = 0;
            }
        }
    }
    //Imprimindo matriz  
    for (i = 0; i < 5; i++){
        for (j = 0; j < 5; j++){
            printf("[ %d ] ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}

