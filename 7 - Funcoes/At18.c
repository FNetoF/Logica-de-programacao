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

    desenha_linha(4);
    desenha_linha(8);
    desenha_linha(10);
    desenha_linha(16);
    desenha_linha(22);
    desenha_linha(30);
}