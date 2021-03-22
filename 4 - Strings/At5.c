#include <stdio.h>
#include <string.h>

int main(){
    char nome[20];
    int i, tamanho;

    printf("Informe o nome: ");
    fgets(nome, 20, stdin);

    tamanho = strlen(nome);
    
    for(i = tamanho; i >= 0; i--){
        printf("%c ", nome[i]);
    }
    printf("\n");
    return 0;
}
