#include <stdio.h>
#include <string.h>

struct dados_funcionario{
    char nome[30], sexo, cargo[30];
    int idade, cpf, data_nasc, codigo, salario;
};

int main(){
    int i, n;

    struct dados_funcionario ficha;

    printf("\nNome: ");
    scanf("%s", ficha.nome);

    do{
        printf("\nSexo (M para masculino ou F para feminino): ");
        scanf("%s", &ficha.sexo);

    }while(ficha.sexo != 'M' && ficha.sexo != 'm' && ficha.sexo != 'F' && ficha.sexo != 'f');

    printf("\nCargo: ");
    scanf("%s", ficha.cargo);
    printf("\nIdade: ");
    scanf("%d", &ficha.idade);
    printf("\nCPF: ");
    scanf("%d", &ficha.cpf);
    printf("\nData de nascimento: ");
    scanf("%d", &ficha.data_nasc);

    do{
        printf("\nCodigo (0-99): ");
        scanf("%d", &ficha.codigo);

    }while(ficha.codigo <= 00 || ficha.codigo >= 99);

    printf("\nSalario: R$");
    scanf("%d", &ficha.salario);

    printf("\nNome: %s", ficha.nome);
    printf("\nSexo: %c", ficha.sexo);
    printf("\nCargo: %s", ficha.cargo);
    printf("\nIdade: %d", ficha.idade);
    printf("\nCPF: %d", ficha.cpf);
    printf("\nData de nascimento: %d", ficha.data_nasc);
    printf("\nCodigo: %d", ficha.codigo);
    printf("\nSalarario: R$%d\n", ficha.salario);
    
    return 0;
}
