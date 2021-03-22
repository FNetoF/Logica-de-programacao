#include <stdio.h>

int main(){
    char nome[20];

    printf("Informe o nome: ");
    fgets(nome, 20, stdin);

    if (nome[0] == 'a' || nome[0] == 'A') {
        printf("\n%s\n", nome);
    }
    return 0;
}
