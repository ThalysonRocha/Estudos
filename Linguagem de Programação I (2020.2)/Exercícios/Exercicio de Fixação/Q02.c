/*Faça um programa que receba a idade de uma pessoa e determine sua
classificação segundo a seguinte tabela:
- Maior de idade;
- Menor de idade;
- Pessoa idosa (idade superior ou igual a 65 anos).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("How old are you ? \n");
    scanf("%d", &age);

    if(age < 18)                    {printf("\nYou are minor !");}
    else if(age >= 18 && age < 65)  {printf("\nYou are of age !");}
    else                            {printf("\nYou are elderly !");}

    return 0;
}
