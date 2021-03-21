#include <stdio.h>
#include <string.h>
int main (){
    char primeiro_nome[20], segundo_nome[20];

    printf("Infome o primeiro nome: ");
    fgets(primeiro_nome, 20, stdin);
    printf("Infome o segundo nome: ");
    fgets(segundo_nome, 20, stdin);

    if(strcmp(primeiro_nome, segundo_nome)){
        printf("As duas strings sao diferentes.\n");
    }else {
        printf("As duas string sao iguais.\n");
    }
    return 0;
}
