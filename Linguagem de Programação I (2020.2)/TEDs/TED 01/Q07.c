/*Elabore um programa que leia um caractere e depois
imprima como um valor inteiro*/

#include <stdlib.h>
#include <stdio.h>

int main ()
{
    printf("Digite uma unica letra: \n");
    char letra;
    scanf("%c", &letra);

    printf("\nA letra digitada foi %d", letra); //retorna o codigo da letra em ASCII.
    
    return 0;   
}