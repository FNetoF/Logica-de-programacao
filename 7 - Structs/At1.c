#include <stdio.h>
#include <string.h>

struct cadastro_aluno {
    char nome[50], curso[20];
    int numero_matricula;
};

int main(){
    int i;

    struct cadastro_aluno ficha[5];

    for (i = 0; i < 5; i++) {
        printf("nome: ");
        scanf("%s", ficha[i].nome);
        printf("curso: ");
        scanf("%s", ficha[i].curso);
        printf("numero da matricula: ");
        scanf("%d", &ficha[i].numero_matricula);
    }
    
    for (i = 0; i < 5; i++) {
        printf("\nNome: %s", ficha[i].nome);
        printf("\ncurso: %s", ficha[i].curso);
        printf("\nNumero da matricula: %d", ficha[i].numero_matricula);
    }
    printf("\n");
    return 0;
}
