#include <stdio.h>

int main(){
    int ano_nasc, ano_atual, result;

    printf("Ano de nascimento: \n");
    scanf("%d", &ano_nasc);
    printf("Ano atual: \n");
    scanf("%d", &ano_atual);

    result= ano_atual - ano_nasc; 

    printf("\n%d anos.\n", result);
    return 0;
}
