#include <stdio.h>

int desenha_linha(int n_linha){
    int i;
    for(i=0; i < n_linha; i++){
        printf("=");
    }
    printf("\n");
    return n_linha;
}

int main(){
    int igual;

    printf("Informe o numero de '=': \n");
    scanf("%d",& igual);

    desenha_linha(igual);
}
