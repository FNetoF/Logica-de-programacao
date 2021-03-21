#include <stdio.h>

int main(){
int vet[5], i, maior, menor;

    //preenche o vetor
    printf("Informe 5 valores inteiro\n");
    for(i = 0; i < 5; i++) {
        printf("[%i] ", i);
        scanf("%d", &vet[i]);
    }

    //encontra o maior e o menor valor
    maior = vet[0];
    menor = vet[0];
    for (i = 0; i < 5; i++) {
        if(vet[i] > maior){
            maior = i;
        }else{
            menor = i;
        }
    }
    
    printf("\nPosicao %d - se encontra o maior valor\n", maior);
    printf("\nPosicao %d - se encontra o menor valor\n", menor);
    return 0;
}
