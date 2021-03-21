#include <stdio.h>

int main(){
    int num[10], i, maior, posMaior = 0;

    //preenche o vetor
    printf("Informe 10 valores inteiro\n");
    for(i = 0; i < 10; i++) {
        printf("[%i] ", i);
        scanf("%d", &num[i]);
    }

    //encontra o maior valor
    maior = num[0];
    for(i = 1; i < 10; i++) {
        if(maior < num[i]) {
            maior = num[i];
            posMaior = i;
        }
    }

    printf("\nPosicao [%i] %d - Maior valor.\n", posMaior, maior);
    return 0;
}
