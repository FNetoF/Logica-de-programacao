#include <stdio.h>

int main(){
    float salario, prest_emprest;

    printf("Salario R$ \n");
    scanf("%f", &salario);
    printf("O valor da prestação R$ \n");
    scanf("%f", &prest_emprest);

    if(prest_emprest > salario * 0.20){
        printf("Empréstimo nao consedido.\n");
    }else{
        printf("Emprestimo concedido.\n");
    }
    return 0;
}
