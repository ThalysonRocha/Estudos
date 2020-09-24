/* Faça um programa que receba dois valores inteiros A e B, se os valores forem
iguais deverá somar os dois, caso contrário multiplique A por B. Ao final, de
qualquer um dos cálculos deve-se atribuir o resultado para uma variável C e
mostrar seu conteúdo na tela*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a, b, c;

    printf("Which is the first number ? \n");
    scanf("%d", &a);

    printf("\nWhich is the second number ? \n");
    scanf("%d", &b);

    if(a == b)
    {
        c = a + b;
        printf("\nThe result is %d", c);
    }
    else
    {
        c = a * b;
        printf("\nThe result is %d", c);
    }

    return 0;   
}