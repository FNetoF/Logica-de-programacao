#include <stdio.h>

int main(){
    float num[10], positivos=0;
    int i, negativos=0;

    //preenche o vetor
    printf("Informe 10 valores inteiro\n");
    for(i = 0; i < 10; i++) {
        printf("[%i] ", i);
        scanf("%f", &num[i]);

        if(num[i] > 0){
            positivos += num[i];
        }else{
            negativos += 1;
        }
    }

    printf("numeros positivos (soma) = %.2f\n", positivos);
    printf("numeros negativos (quantidade) = %d\n", negativos);

    return 0;
}
