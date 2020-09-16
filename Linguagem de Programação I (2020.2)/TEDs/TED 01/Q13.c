/*Faça um programa que leia um caractere do tipo char e depois imprima
entre aspas duplas. Assim, se o caractere lido for a letra A, deverá ser
impresso "A".*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra;
    printf("Digite uma letra: \n");
    scanf("%c", &letra);

    printf("\nA letra exibida eh \"%c\"", letra);

    return 0;
}