#include <stdio.h>

int main(){
    int a, b;

    scanf("%d", &a);
    scanf("%d", &b);

    if(a > b){
        printf("\n%d eh maior que %d\n", a, b);
    }else{
        printf("\n%d eh maior que %d\n", b, a);
    }
    return 0;
}
