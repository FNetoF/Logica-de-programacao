#include <stdio.h>
#include <string.h>

int main(){
    char nome[25];
    int i;

    printf("\nInforme o nome: ");
    fgets(nome, 25, stdin);

    for (i = 0; i < 4; i++) {
        printf("%c", nome[i]);
    }
    printf("\n");
    return 0;
}
