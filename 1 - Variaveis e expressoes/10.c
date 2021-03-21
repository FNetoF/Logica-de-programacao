#include <stdio.h>

int main(){
    float vlr, desconto, parc1, parc2, parc3, comisao_vend_avist, comisao_vend_parcel;

    printf("Valor da venda R$ ");
    scanf("%f", &vlr);

    desconto = vlr -(vlr * 0.10);

    parc1= vlr;
    parc2= vlr / 2;
    parc3= vlr / 3;

    comisao_vend_avist= desconto * 0.05;
    comisao_vend_parcel= vlr * 0.05;

    printf("\nValor com desconto R$ %.2f\n\n", desconto);
    printf("R$ %.2f  1 x sem juros\nR$ %.2f  2 x sem juros\nR$ %.2f  3 x sem juros\n\n", parc1, parc2, parc3);
    printf("Comissao do vendedor R$ %.2f\n", comisao_vend_avist);
    printf("Comissao do vendedor R$ %.2f\n", comisao_vend_parcel);
    return 0;
}
