#include <stdio.h>

int main(){
    int v[10], v1[10], v2[10], i;

    //preenche vetor
    printf("Informe 10 valores inteiro\n");
    for (i = 0; i < 10; i++) {
        printf("[%i] ", i);
        scanf("%i",&v[i]);
    }
        
    //Imprimi os valores par e impares
    printf("\n");
    for (i = 0; i < 10; i++) {
        if(v[i] % 2 == 0){
            v1[i] = v[i];
            printf("[%i] %d - par\n", i, v1[i]);
        }else{
            v2[i] = v[i];
            printf("[%i] %d - impar\n", i, v2[i]);
        }
    }
    return 0;
}
