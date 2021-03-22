#include <stdio.h>

int main(){
    int vet[10], i;

    //preenche o vetor
    printf("Informe 10 valores inteiro\n");
    for(i = 0; i < 10; i++) {
        printf("[%i] ", i);
        scanf("%d",&vet[i]);
    }

    //Imprimi os valores Pares
    printf("\n");
    for (i = 0; i < 10; i++){
        //encontra os valores pares
        if(vet[i] % 2 == 0){
            printf("[%i] %d eh par\n", i, vet[i]);
        }
    }
    return 0;
}
