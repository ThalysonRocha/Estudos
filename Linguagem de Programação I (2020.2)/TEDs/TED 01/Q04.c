/*Faça um programa que leia um numero inteiro e depois imprima
usando o operador "%f". Veja o que aconteceu.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um numero inteiro: \n");
    int numero;
    scanf("%d", &numero);

    printf("O numero lido foi %f", numero);

return 0;
}