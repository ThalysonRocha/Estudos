//Escreva um programa que leia um numero inteiro e depois imprima-o

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float numero;
    printf("Digite um numero:\n");
    scanf("%f", &numero);

    printf("\nO numero digitado foi %.2f", numero);
    return 0;
}