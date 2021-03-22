#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    int tamanho;

    printf("Informe o nome: ");
    fgets(nome, 20, stdin);

    tamanho = strlen(nome);

    printf("\nEsse nome tem %d letras\n", tamanho);
    return 0;
}
