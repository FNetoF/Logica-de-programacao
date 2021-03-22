#include <stdio.h>

float media_aritmetica(float n1, float n2, float n3){
    float x;
    x = (n1 + n2 + n3) / 3;

    return x;
}

float media_ponderada(float n1, float n2, float n3){
    float x;
    x = (n1*5 + n2*3 + n3*2)/10;

    return x;
}

float dados(float aux){
    float nota1, nota2, nota3, result;
    char letra;

    do{
        printf("Menu\n\n");
        printf("A - media aritmetica\n");
        printf("P - media  ponderada\n\n");
        scanf(" %c", &letra);
    }while(letra !='a' && letra !='A' && letra !='p' && letra !='P');

    if(letra == 'A' || letra == 'a'){
        printf("Nota 1: ");
        scanf("%f", &nota1);
        printf("Nota 2: ");
        scanf("%f", &nota2);
        printf("Nota 3: ");
        scanf("%f", &nota3);

        aux= media_aritmetica(nota1, nota2, nota3);
        return aux;
    }else if(letra == 'P' || letra == 'p'){
        printf("Nota 1-(peso 5): ");
        scanf("%f", &nota1);
        printf("Nota 2-(peso 3): ");
        scanf("%f", &nota2);
        printf("Nota 3-(peso 2): ");
        scanf("%f", &nota3);

        aux=media_ponderada(nota1, nota2, nota3);
        return aux;
    }
} 

int main(){
    float resultado;

    printf("\nMedia: %.2f\n", dados(resultado));
}

