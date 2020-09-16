//Escreva um programa que leia um numero inteiro e depois imprima-o

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int numero;
    printf("Digite um numero:\n");
    scanf("%d", &numero);

    printf("\nO numero digitado foi %d", numero);
    return 0;
}