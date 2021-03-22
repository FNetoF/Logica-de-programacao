#include <stdio.h>
#include <string.h>

int main(){
    char nome[20], vogais[] = "aeiouAEIOU";
    int i, j, aux;

    printf("Informe o nome: ");
    fgets(nome, 20, stdin);

    aux = strlen(vogais);
    printf("\n");
    for(i = 0; i < strlen(nome); i++){
        for(j = 0; j < aux; j++){
            if (nome[i] == vogais[j]) {
                break;
            }
        }
        if (j == aux) {
            printf("%c ", nome[i]);
        }
    }
    return 0;
}
