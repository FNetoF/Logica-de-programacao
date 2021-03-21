#include <stdio.h>

int main(){
    float nota1, nota2, nota3, nota_final;

    printf("1º nota (Trabalho de laboratorio): \n");
    scanf("%f", &nota1);
    printf("2º nota (Avaliação semestral): \n");
    scanf("%f", &nota2);
    printf("3º nota (Exame final): \n");
    scanf("%f", &nota3);

    nota_final= (nota1 * 2 + nota2 * 3 + nota3 * 5) / 10;

    if(nota_final >= 0 && nota_final <=2.9){
        printf("Reprovado.\n");
    }else if (nota_final >= 3 && nota_final <= 4.9){
        printf("Recuperacao.\n");
    }else{
        printf("Aprovado.\n");
    }
    return 0;
}
