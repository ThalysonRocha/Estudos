/*Construa uma estrutura aluno com nome, numero de matrícula e curso. Leia do usuário
a informação de 5 alunos, armazene em vetor dessa estrutura e imprima os dados na tela.*/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct
{
    char nome[50];
    char curso[30];
    char matricula[20];

}aluno;

aluno lista[5];
int i, x;

int main()
{   
    for(i=0; i<5; i++){
    printf("\nDigite seu nome: ");
    fgets(lista[i].nome, 50, stdin);

    printf("\nDigite seu curso: ");
    fgets(lista[i].curso, 30, stdin);

    printf("\nDigite sua matricula: ");
    fgets(lista[i].matricula, 20, stdin);
    }

    
    //=-=-=-=-=-=-=-=IDENTIFICADORES--=-=-=-=-=-=-=-=-=-=-=-
    for(i=0; i<5; i++){
    printf("\nAluno N %d", i+1);
    printf("%s\n", lista[i].nome);
    printf("%s", lista[i].curso);
    printf("\n%s", lista[i].matricula);
    }

    return 0;
}