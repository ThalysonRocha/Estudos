/*2. Faça um programa que leia dois números inteiros, 
encontre o maior deles e imprima para o usuário. */

#include <stdio.h>
#include <stdlib.h>

float num1;
float num2;

int main ()
{
printf("Digite o primeiro numero: \n");
scanf("%f", &num1);

printf("\nDigite o segundo numero: \n");
scanf("%f", &num2);

    if(num1 == num2)
    {
        printf("Os numeros tem o mesmo valor !");
    }
    if(num1 > num2)
    {
        printf("\nO primeiro numero eh maior e seu valor eh %.2f .", num1);
    }
    else
    {
        printf("\nO segundo numero eh maior e seu valor eh %.2f .", num2);
    }

return 0;
}