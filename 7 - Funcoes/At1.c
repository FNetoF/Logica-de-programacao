#include <stdio.h>

int numero_dobro(){
    int a, b, c,result, result1, result2;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    result= a * a;
    result1= b * b;
    result2= c * c;

    printf("O dobro de %d eh: %d\n", a, result);
    printf("O dobro de %d eh: %d\n", b, result1);
    printf("O dobro de %d eh: %d\n",c, result2);
}

int main(){
    numero_dobro();

    return 0;
}
