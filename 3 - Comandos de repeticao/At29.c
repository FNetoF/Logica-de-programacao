#include <stdio.h>

int main(){
    int num, i;

    scanf("%d", &num);
    printf("\n");

    for (i = num; i >= 0; i--){
        if (i % 2 == 0){
            printf("%d\n", i);
        }
    }
    return 0;
}
