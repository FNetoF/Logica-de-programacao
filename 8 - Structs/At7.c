#include <stdio.h>
#include <string.h>

struct dados {
    char compromisso[60];
};

struct data {
    int dia, mes, ano;
    struct dados dado;
};

int main(){
    int i;

    struct data dias[5];

    for (i = 0; i < 5; i++) { 
        printf("Compromisso: ");
        scanf("%s", dias[i].dado.compromisso);
        printf("Data\n");
        printf("dia: ");
        scanf("%i", &dias[i].dia);
        printf("Mes: ");
        scanf("%i", &dias[i].mes);
        printf("Ano: ");
        scanf("%i", &dias[i].ano);
    }

    for (i = 0; i < 5; i++) {
        printf("Informe o mes e o ano para buscar o compromisso");
        printf("Mes: ");
        scanf("%i", &dias[i].mes);
        printf("Ano: ");
        scanf("%i", &dias[i].ano);


        printf("Dia: %i  do  mes %i\n", dias[i].dia, dias[i].ano);
        printf("Compromisso: %s\n", dias[i].dado.compromisso);
    }
    
    return 0;
}
