#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct carro {
    char marca[15];
    int ano;
    float preco;
};

int main() {
    int i, n;
    float p;

    printf("Quantos carros deseja analizar\n");
    scanf("%d", &n);

    struct carro lista[n];

    for (i = 0; i < n; i++) {
        printf("Marca do %iº carro: ", i + 1);
        scanf("%s", lista[i].marca);
        printf("Ano: ");
        scanf("%d", &lista[i].ano);
        printf("Preco R$");
        scanf("%f", &lista[i].preco);
    }

    for (i = 0; i < n; i++) {
    printf("Procurar carros com preco abaixo de R$");
    scanf("%f", &p);

    if ( p == 0) {
        exit(0);
    }
        for (int j = 0; j < n; j++) {
            if(lista[i].preco < p) {
                printf("\nMarca: %s\nAno: %i\nPreco: %.2f\n", lista[i].marca, lista[i].ano, lista[i].preco);
            }
        }
    }
    return 0;
}
