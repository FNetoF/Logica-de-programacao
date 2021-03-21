#include <stdio.h>
#include <math.h>

int main(){
    int i;
    float vet[20], quadrado[20];

    //preenche vetor 
    printf("Informe 20 valores inteiro\n");
    for (i = 0; i < 20; i++) {
        printf("[%i] ", i);
        scanf("%f", &vet[i]);
    }
    
    //Quadrado
    for (i = 0; i < 20; i++) {
        quadrado[i] = pow (vet[i], 2);
    }

    //Imprimindo na tela
    printf("\n");
    for (i = 0; i < 20; i++) {
        printf("%.0f^2 = %.2f\n", vet[i],quadrado[i]);
    }
    
    return 0;
}
