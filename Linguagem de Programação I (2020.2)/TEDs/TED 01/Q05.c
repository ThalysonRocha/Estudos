/*Faça um programa que leia um valor do tipo float e depois imprima usando o operador
"%d". Veja o que aconteceu.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("Digite um valor: \n");
    float num;
    scanf("%f", &num);

    printf("\nO valor lido foi %d", num);
    //Retorna um valor aleatório
    
    return 0;
}