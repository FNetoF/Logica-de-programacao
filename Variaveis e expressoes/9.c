#include <stdio.h>

int main(){
    int premio= 780000;
    float prim, seg, ter;

    prim= premio * 0.46;
    seg= premio * 0.32;
    ter= premio * 0.22;

    printf("1º colocado R$ %.2f\n2º colocado R$ %.2f\n3º colocado R$ %.2f\n", prim, seg, ter);
    return 0;
}
