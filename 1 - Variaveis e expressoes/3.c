#include <stdio.h>

int main(){
    int x, a, s;

    scanf("%d", &x);

    a= x - 1;
    s= x + 1;

    printf("O %d eh o antecessor de %d e o sucessor de %d\n", x, a, s);
    return 0;
}
