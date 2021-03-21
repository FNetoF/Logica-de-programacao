#include <stdio.h>

int main(){
    int vet[6], i;

    //preenche o vetor
    printf("Informe 6 valores inteiro\n");
    for (i = 0; i < 6; i++) {
        printf("[%i] ", i);
        scanf("%d",&vet[i]);
    }
    
    //imprime o vetor
    printf("\n");
    for (i = 0; i < 6; i++) {
        printf("[%i] %d\n", i, vet[i]);
    }

    return 0;
}
