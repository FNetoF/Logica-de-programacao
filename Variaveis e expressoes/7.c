#include <stdio.h>

int main(){
    float salini, salfinal;

    scanf("%f", &salini);

    salfinal= (salini * 0.25) + salini;

    printf("Salario com 25%% R$ %.2f\n", salfinal);
    return 0;
}
