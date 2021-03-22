#include <stdio.h>

int convesao_Seg(int hora, int minutos, int segundos){
    int result;

    result= hora*3600 + minutos * 60 + segundos; 
    return result;
}
int main(){
    int h, m, s, resultado;

    printf("horas: ");
    scanf("%d",&h);
    printf("minutos: ");
    scanf("%d",&m);
    printf("segundos: ");
    scanf("%d",&s);

    printf("Total de segundos: %d\n",convesao_Seg(h, m, s));
}
