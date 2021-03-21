#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main(){
    char nome[20];
    int i;

    printf("Informe uma cadeia de caracteres: \n");
    fgets(nome, 20, stdin);
    
    for (i = 0; i < nome[i]; i++) {
        nome[i] = toupper(nome[i]);
    }
    printf("\n%s \n", nome);
    return 0;
}
