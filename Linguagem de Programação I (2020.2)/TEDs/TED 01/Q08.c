/*Faça um programa que leia dois valores inteiro e depois imprima
na ordem inversa em que foram lidos*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1, num2;
    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("\nDigite o segundo numero: \n");
    scanf("%d", &num2);

    printf("\nImprimindo valores na ordem inversa: \n%d e %d", num2, num1);

    return 0;
}