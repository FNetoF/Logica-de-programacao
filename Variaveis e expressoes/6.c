#include <stdio.h>

int main(){
    float a, b, c, d, media;

    scanf("%f", &a);
    scanf("%f", &b);
    scanf("%f", &c);
    scanf("%f", &d);

    media= (a + b + c + d) / 4;

    printf("Media= %.2f\n", media);
    return 0;
}
