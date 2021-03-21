#include <stdio.h>

int main(){
    int opc,a, b, result;

    printf("Escolha uma opcao: \n\n");
    printf("1- Soma de 2 numeros.\n");
    printf("2- Difereca entre 2 numeros (maior pelo menor).\n");
    printf("3- Produto entre 2 numeros.\n");
    printf("4- Divisão entre 2 números (o denominador não pode ser zero).\n");
    scanf("%d", &opc);

    switch (opc){
    case 1:
        printf("Informe 2 numeros a serem somados\n");
        scanf("%d", &a);
        scanf("%d", &b);

        result= a + b;

        printf("%d + %d = %d\n", a, b, result);
        break;
    case 2:
        printf("Informe 2 numeros a serem subtraido\n");
        scanf("%d", &a);
        scanf("%d", &b);

        result= a - b;

        printf("%d - %d = %d\n", a, b, result);
        break;
    case 3:
        printf("Informe 2 numeros a serem multiplicados\n");
        scanf("%d", &a);
        scanf("%d", &b);

        result= a * b;

        printf("%d * %d = %d\n", a, b, result);
        break;
    case 4:
        printf("Informe 2 numeros a serem divididos\n");
        scanf("%d", &a);
        scanf("%d", &b);

        result= a / b;

        printf("%d / %d = %d\n", a, b, result);
        break;
    default:
        printf("Numero invalido. Informe um numero de 1 a 4!!!\n");
        break;
    }
    return 0;
}
