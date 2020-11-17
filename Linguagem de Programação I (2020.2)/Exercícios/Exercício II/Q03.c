/*Faça um programa que armazene em um registro de dados (estrutura composta) os dados de um funcionário
 de uma empresa, compostos de: Nome, Idade, Sexo (M/F), CPF, Data de Nascimento, 
 Código do Setor onde trabalha (0-99), Cargo que ocupa (string de ate 30 caracteres) e Salário. 
 Os dados devem ser digitados pelo usuário, armazenados na estrutura e exibidos na tela.*/


#include <stdlib.h>
#include <stdio.h>

typedef struct{
    char nome[40];
    char sexo[10];
    char cpf[15];
    char nasc[15];
    char cargo[30];
    int idade;
    int setor;
    float salario;
}cadastro;

cadastro funcionario;

int main()
{
    printf("\nDigite seu nome: ");
    fgets(funcionario.nome, 40, stdin);

    printf("\nQual o seu sexo(M-F): ");
    fgets(funcionario.sexo, 10, stdin);

    printf("\nDigite seu CPF: ");
    fgets(funcionario.cpf, 15, stdin);

    fflush(stdin);
    printf("\nQual a sua data de nascimento: ");
    fgets(funcionario.nasc, 15, stdin);

    printf("\nDigite sua idade: ");
    scanf("%d", &funcionario.idade);

    printf("\nQual o código do seu setor: ");
    scanf("%d", &funcionario.setor);

    fflush(stdin);
    printf("\nDigite qual o seu cargo: ");
    fgets(funcionario.cargo, 30, stdin);

    printf("\nQual o seu salário: ");
    scanf("%f", &funcionario.salario);

    
    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-
    printf("%s\n", funcionario.nome);
    printf("%s\n", funcionario.cpf);
    printf("%s\n", funcionario.sexo);
    printf("%s\n", funcionario.nasc);
    printf("%d anos\n", funcionario.idade);
    printf("%s\n", funcionario.cargo);
    printf("%d\n", funcionario.setor);
    printf("%.2f\n", funcionario.salario);

    return 0;
}