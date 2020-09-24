/*1. Faça um programa que receba três valores inteiros e diferentes e mostre-os
em ordem decrescente.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    
    int num1, num2, num3;

    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    
    printf("\nDigite o segundo numero: ");
    scanf("%d", &num2);

    printf("\nDigite o terceiro numero: ");
    scanf("%d", &num3);


    if(num1>num2 && num2>num3)
    {
        printf("\n%d - %d - %d", num1, num2, num3);
    }
    else if(num1>num3 && num3>num2)
    {
        printf("\n%d - %d - %d", num1, num3, num2);
    }
    else if(num2>num1 && num1>num3)
    {
        printf("\n%d - %d - %d", num2, num1, num3);
    }
    else if(num2>num3 && num3>num1)
    {
        printf("\n%d - %d - %d", num2, num3, num1);
    }
    else if(num3>num1 && num1>num2)
    {
        printf("\n%d - %d - %d", num3, num1, num2);
    }
    else if(num3>num2 && num2>num1)
    {
        printf("\n%d - %d - %d", num3, num2, num1);
    }

    printf("\nFim do programa !");

    return 0;
}