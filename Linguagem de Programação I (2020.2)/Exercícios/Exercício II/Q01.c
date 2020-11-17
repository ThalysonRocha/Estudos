#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

typedef struct{
    char nome[50];
    char endereco[150];
    int idade;

}cadastro;

cadastro pessoa;

int main()
{
    setlocale(LC_ALL, "Portuguese");

    printf("SEJA BEM VINDO !\n\n");

    printf("Digite seu nome: ");
    fgets(pessoa.nome, 50, stdin);

    printf("\nDigite seu endereço: ");
    fgets(pessoa.endereco, 150, stdin);

    printf("\nDigite sua idade: ");
    scanf("%d", &pessoa.idade);

    //=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-=-

    printf("\n\nEste é o resultado do seu cadastro:\n\n");

    printf("%s", pessoa.nome);
    printf("%d", pessoa.idade);
    printf("\n%s", pessoa.endereco);

    return 0;
}