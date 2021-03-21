#include <stdio.h>

int main(){
    int a, b, c, result;

    scanf("%d", &a);
    scanf("%d", &b);
    scanf("%d", &c);

    result= (a * a) + (b * b) + (c * c);

    printf("A soma dos quadrados= %d\n", result);
    return 0;
}
