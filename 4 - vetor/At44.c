#include <stdio.h>

int main(){
    int vet[5], i, maior, menor;
    float soma, media;

    //preenche o vetor
    printf("Informe 5 valores inteiro\n");
    for (i = 0; i < 5; i++) {
        printf("[%i] ", i);
        scanf("%d",&vet[i]);
    }
    
    //encontra o maior e o menor valor
    maior = vet[0];
    menor = vet[0];
    for (i = 0; i < 5; i++) {
        if(vet[i] > maior){
            maior = vet[i];
        }else{
            menor = vet[i];
        }
    }

    //Calculando a média
    for (i = 0; i < 5; i++) {
        soma += vet[i];
    }
    media = soma / 5;

    printf("\n%d - Maior valor.\n", maior);
    printf("\n%d - Menor valor.\n", menor);
    printf("\nA media dos valores eh %.2f\n", media);
    return 0;
}
