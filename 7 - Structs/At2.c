#include <stdio.h>
#include <string.h>
#define TAM 5

typedef struct alunos {
    int matricula;
    float nota_p1, nota_p2, nota_p3;
    char nome[25];
} Aluno, MaiorNotaAluno, MaiorMediaAluno, MenorMediaAluno;

int main(){
    Aluno alunos[TAM];
    float maior = 0;
    float maiorMedia = 0;
    float menorMedia = 10;
    MaiorNotaAluno maiorNotaAluno;
    MaiorMediaAluno maiorMediaAluno;
    MenorMediaAluno menorMediaAluno;

    printf("\nAlunos do curso de Introdução a Programação de Computadores.\n\n");
    for(int i = 0; i < TAM; i++){
        printf("Aluno %d\n", i + 1);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        printf("N1: ");
        scanf("%f", &alunos[i].nota_p1);
        printf("N2: ");
        scanf("%f", &alunos[i].nota_p2);
        printf("N3: ");
        scanf("%f", &alunos[i].nota_p3);	
        printf("\n");
    }

    for(int i = 0; i < TAM; i++) {
        if (alunos[i].nota_p1 > maior) {
            maior = alunos[i].nota_p1;
            maiorNotaAluno = alunos[i];
        }
    }

    printf("\nAluno com a maior nota da primeira prova: %s\n", maiorNotaAluno.nome);


    for (int i = 0; i < TAM; i++) {
        float mediaAluno = ((alunos[i].nota_p1 + alunos[i].nota_p2 + alunos[i].nota_p3)/3);
        if(mediaAluno > maiorMedia){
            maiorMedia = mediaAluno;
            maiorMediaAluno = alunos[i];
        }
    }
    printf("\nAluno com a maior media: %s\n", maiorMediaAluno.nome);


	for (int i = 0; i < TAM; i++) {
        float mediaAluno = ((alunos[i].nota_p1 + alunos[i].nota_p2 + alunos[i].nota_p3)/3);
        if(mediaAluno < menorMedia){
            menorMedia = mediaAluno;
            menorMediaAluno = alunos[i];
        }
    }
    printf("\nAluno com a menor media: %s\n", menorMediaAluno.nome);

    for(int i = 0; i < TAM; i++) {
        float mediaAluno = ((alunos[i].nota_p1 + alunos[i].nota_p2 + alunos[i].nota_p3)/3);
        if(mediaAluno >= 6){
            printf("%s -> Aprovado - media: %.2f\n", alunos[i].nome, mediaAluno);
        }else{
        printf("%s -> Reprvado - media: %.2f\n", alunos[i].nome, mediaAluno);
        }
    }
    return 0;	
}
