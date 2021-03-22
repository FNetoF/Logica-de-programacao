#include <stdio.h>
#include <stdlib.h>


float imposto(float salario ,float r, float taxaperc){

    //taxaperc=(100*result)/valor; Essa formular é para descobrir a taxa percentual.

    if (salario <= 500.00){
        r= salario * 0.05;
        r*= 100;
        taxaperc= r /salario;        
        //printf("\n%.2f%% de imposto\n\n", taxaperc);

    }else if (salario >= 500.01 && salario <= 850.00){
        r= salario * 0.15;
        r*= 100;
        taxaperc= r /salario;
        //printf("\n%.2f%% de imposto\n\n", taxaperc);

    }else if (salario >= 850.01){
        r= salario * 0.20;
        r*= 100;
        taxaperc= r /salario;
        //printf("\n%.2f%% de imposto\n\n", taxaperc);
    }
    return taxaperc;
}

float classificao(float salario){

    if (salario <= 700.00){
        printf("\nMal renumerado\n");
    }else if (salario >=700.01){
        printf("\nBem remunerado\n");
    }
    return salario;
}

int main(){
    float sala_bruto=0, resultado=0, taxa=0, cla=0;
    int opc;


    do{
        printf("\n---------------Menu---------------\n\n");
        printf("[1] Imposto\n");
        printf("[2] Novo salario\n");
        printf("[3] Classificaçcao\n");
        printf("[4] Sair\n");
        scanf("%d",&opc);

        switch(opc){
            case 1:
                printf("\nInforme o Salario \nR$ ");
                scanf("%f",&sala_bruto);

                float aux=imposto(sala_bruto, resultado, taxa);
                printf("\n%.2f%% de imposto\n\n", aux);
                break;
            case 2:
                if (opc == 2){
                    printf("Salario bruto \nR$");
                    scanf("%f", &sala_bruto);

                    aux=imposto(sala_bruto, resultado, taxa);
                    printf("\n%.2f%% de imposto\n\n", aux);
                }
                break;
            case 3:    
                if (sala_bruto != 0){
                    classificao(sala_bruto);
                }else{
                    printf("Informe o salario\nR$ ");
                    scanf("%f", &sala_bruto);

                    classificao(cla);
                }   
                break;
            case 4:
                printf("Obrigado, volte sempre!!!\n");
                exit(0);
                break;
            default:
            printf("\n");
        }
    }while(opc !=4);
}
