#include <stdio.h>
#include <string.h>

struct livro {
  char titulo[30];
  char autor[15];
  int ano;
};

int main() {
    char busca[30];
    int index[5], i, aux;

    struct livro livros[5];

    for (i = 0; i < 5; i++) {
        printf("Informe o tiltulo do %iº livro: ", i + 1);
        scanf("%s", livros[i].titulo);
        printf("Informe o Autor do %iº livro: ", i + 1);
        scanf("%s", livros[i].autor);
        printf("Informe o Ano do %iº livro: ", i + 1);
        scanf("%i", &livros[i].ano);
        printf("\n\n********************************\n\n");
    }
    
    printf("\nInforme o título do Livro que deseja pesquisar: ");
    scanf("%s", busca);

    aux = 0;
    for(i = 0; i<5; i++) {
       if(strcmp(livros[i].titulo, busca) == 0) {
           index[aux] = i;
           aux++;
       }
    }
    printf("\n********************************\nO Livro encontrado:\n");
    for(i = 0; i<= aux; i++) {
        if(index[0] != -1) {
            printf(" Título: %s\n", livros[index[i]].titulo);
            printf(" Autor: %s\n", livros[index[i]].autor);
            printf(" Ano: %d\n", livros[index[i]].ano);
        }else{
            printf("Nenhum livro foi encontrado.\n");
            break;
        }
    }
    return 0;
}
