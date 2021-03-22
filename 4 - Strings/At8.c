#include <stdio.h>
#include <string.h>

int main(){
    char dias_da_semana[3];

    printf("Informe o dia da semana: \n\n");
    printf("Exemplo de entrada:\ns\ne\ng\n\nOU seg\n\n");
    scanf("%c ", &dias_da_semana[0]);
    scanf("%c ", &dias_da_semana[1]);
    scanf("%c", &dias_da_semana[2]);

    switch (dias_da_semana[0] + dias_da_semana[1] + dias_da_semana[2]) {
    case 's' + 'e' + 'g':
        printf("\nSegunda\n");
        break;
    case 't' + 'e' + 'r':
        printf("\nTerca\n");
        break;
    case 'q' + 'a' + 'r':
        printf("\nQuarta\n");
        break;
    case 'q' + 'u' + 'i':
        printf("\nQuinta\n");
        break;
    case 's' + 'e' + 'x':
        printf("\nSexta\n");
        break;
    case 's' + 'a' + 'b':
        printf("\nSabado\n");
        break;
    case 'd' + 'o' + 'm':
        printf("\nDomingo\n");
        break;
    default:
        printf("Dia invalido!!!\n");
        break;
    }
    return 0;
}


/*Aoooooo questão que deu trabalho*/

