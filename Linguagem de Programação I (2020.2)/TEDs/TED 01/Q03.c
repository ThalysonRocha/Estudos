/*Escreva um programa que leia um numero inteiro e depois imprima
a mensagem "Valor lido", seguido do valor inteiro. Use apenas um comando
'printf()'.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um valor: \n");
    int numero;
    scanf("%d", &numero);

    printf("O valor lido foi %d !", numero);

return 0;
}