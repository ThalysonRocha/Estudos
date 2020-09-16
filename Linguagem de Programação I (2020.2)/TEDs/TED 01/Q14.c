/*Faça um program que leia três caracteres do tipo char e depois imprima
eles, um em cada linha, usando um unico comando printf() para isso.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char letra1, letra2, letra3;

    printf("Digite a primeira letra: \n");
    scanf("%c", &letra1);

    printf("\nDigite a segunda letra: \n");
    scanf("%c", &letra2); 

    printf("\nDigite a terceira letra: \n");
    scanf("%c", &letra3);

    printf("\nAs letras digitadas foram %c. \n%c. \n%c.", letra1, letra2, letra3);

    return 0;
}