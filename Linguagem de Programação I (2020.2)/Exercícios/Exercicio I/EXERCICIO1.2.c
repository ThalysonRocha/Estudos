/*2. Faça um programa que leia dois números inteiros, 
encontre o maior deles e imprima para o usuário. */

#include <stdio.h>
#include <stdlib.h>

float num1;
float num2;
float resultado;

int main ()
{
printf("Digite o primeiro numero: \n");
scanf("%f", &num1);

printf("\nDigite o segundo numero: \n");
scanf("%f", &num2);

resultado = (num1 > num2) ? num1 : num2;

printf("\n O maior numero eh %.2f", resultado);

return 0;
}