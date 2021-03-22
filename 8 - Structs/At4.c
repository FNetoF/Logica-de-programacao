#include <stdio.h>
#include <string.h>

typedef struct{
	int matricula;
	char nome[25];
	float mediaFinal;
}Aluno, Aprovado, Reprovado;

int main(){
	Aluno alunos[10];
	Aprovado aprovado[10];
	Reprovado reprovado[10];
	
	for(int i = 0; i < 10; i++){
		printf("Aluno %d\n", i + 1);
		printf("Nome: ");
		scanf("%s", alunos[i].nome);
		printf("Matricula: ");
		scanf("%d", &alunos[i].matricula);
		printf("Media Final: ");
		scanf("%f", &alunos[i].mediaFinal);
		printf("\n");
	}
	
	for(int i = 0; i < 10; i++){
		if(alunos[i].mediaFinal >= 5){
			aprovado[i] = alunos[i];
		}else{
			reprovado[i] = alunos[i];
		}
	}

	//Aprovados	
	for(int i = 0; i < 10; i++){
		if(aprovado[i].nome[i] != 0){	
			printf("Aluno(a), Nome: %s\nMatricula = %d\nMediaFinal = %.2f\n", aprovado[i].nome, aprovado[i].matricula, aprovado[i].mediaFinal);
			printf("Aluno(a) Aprovado(a)\n");
		}
	}
	
	//Reprovados
	for(int i = 0; i < 10; i++){
		if(reprovado[i].nome[i] != 0){
			printf("Aluno(a), Nome: %s\nMatricula = %d\nMediaFinal = %.2f\n", reprovado[i].nome, reprovado[i].matricula, reprovado[i].mediaFinal);
			printf("Aluno(a) Reprovado(a)\n");
		}
	}	
	return 0;
}
