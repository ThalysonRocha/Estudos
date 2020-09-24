/*Crie um programa que receba a idade de uma pessoa e informe a sua classe
eleitoral:
- Não eleitor (abaixo de 16 anos);
- Eleitor obrigatório (entre a faixa de 18 e menor de 65 anos);
- Eleitor facultativo (de 16 até 18 anos e maior de 65 anos, inclusive)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("How old are you ? \n");
    scanf("%d", &age);

    if(age >= 18 && age <65)  {printf("\nYou are a mandatory voter !");}
    else if(age < 16)         {printf("\nYou aren't a voter !");}
    else                      {printf("\nYou are a optional voter !");}

    return 0;

}