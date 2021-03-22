#include <stdio.h>

int main(){
    int vet[10], i;

    //preenche o vetor
    printf("Informe 10 valores inteiro\n");
    for (i = 0; i < 10; i++) {
        printf("[%i] ", i);
        scanf("%d",&vet[i]);
    }
    //Imprimi 
    printf("\n");
    for (i = 0; i < 10; i++) {
        //atribuindo valores 0 para números negativos
        if(vet[i] < 0) {
            vet[i] = 0;
            printf("[%i] %d\n", i, vet[i]);
        }
    }
    return 0;
}
