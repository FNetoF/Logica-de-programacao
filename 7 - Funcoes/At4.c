#include <stdio.h>

int fatorial(int n){
    int i, fat;
    
    if (n <= 1){
        return 1;
    }

    fat = 1;

    for (i = 2; i <= n; i++){
        fat *= i;
    }
    return fat;
}

int somatorio(int n){
    int somatorio= 0, i= 1;

    while(i <= n){
        somatorio += i;
        i++;
    }
    return somatorio;
}

int main(){
    int result_fatorial,result_somatorio, n1=0, cont=0, n2=0;

    printf("Informe um numero a ser fatorado: \n");
    scanf("%d", &n1);
    printf("Qual numero deseja fazer somatorio?\n");
    scanf("%d", &n2);

    result_fatorial= fatorial(n1);
    result_somatorio= somatorio(n2);

    printf("\n%d!= %d\n", n1, result_fatorial);
    printf("Somatorio de 1 ate %d eh: %d\n", n2, result_somatorio);
}
