#include <stdio.h>

int main(){
    int vet[10], i, aux;

    //preenche o vetor
    printf("Informe 10 valores inteiro\n");
    for (i = 0; i < 10; i++) {
        printf("[%i] ", i);
        scanf("%d",&vet[i]);
    }
    printf("\n");
    
    //verificando se existem valores iguais
    for (i = 0; i < 10; i++) {
        for(aux = i + 1; aux < 10; aux++) {
            if (vet[i] == vet[aux]){
                printf("O valor %d se repete\n", vet[i]);
            }
        }
    }
    return 0;
}
