#include <stdio.h>

int main(){
    int i= 1, a= 1, cont= 1;

    for( ; i <= 100; i++){
        printf("%d\n", i);
    }
    while(a <= 100){
        printf("%d\n", a);
        a++;
    }
    do{
        printf("%d\n", cont);
        cont++;
    }while( cont <= 100);
    return 0;
}
