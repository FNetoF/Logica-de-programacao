#include <stdio.h>
#include <string.h>

int main(){
    char nome[20], sexo;
    int idade, i;

    printf("\nInforme o nome: ");
    fgets(nome, 20, stdin);
    printf("\nSexo\n(M para masculino ou F para Feminino): ");
    scanf("%c", &sexo);
    printf("\nInforme a idade: ");
    scanf("%d", &idade);

    if(sexo == 'f' || sexo == 'F' && idade <= 25) {
        printf("\nOla, %s\n", nome);
        printf("ACEITA\n");
    }else {
        printf("NAO ACEITA\n");
    }
    return 0;
}
