/*Depois da liberação do governo para as mensalidades dos planos de saúde,
as pessoas começaram a fazer pesquisas para descobrir um bom plano, não
muito caro. Um vendedor de um plano de saúde apresentou a tabela a seguir.
Criar um programa que receba a idade de uma pessoa e imprima o valor que ela
deverá pagar, segundo a seguinte tabela:*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int age;

    printf("How old are you ? \n");
    scanf("%d", &age);

    if(age<= 10)                   {printf("\nYou'll pay R$ 30,00 per month.");}
    else if(age > 10 && age <= 29) {printf("\nYou'll pay R$ 60,00 per month.");}
    else if(age > 29 && age <= 45) {printf("\nYou'll pay R$ 120,00 per month.");}
    else if(age > 45 && age <= 59) {printf("\nYou'll pay R$ 150,00 per month.");}
    else if(age > 59 && age <= 65) {printf("\nYou'll pay R$ 250,00 per month.");}
    else                           {printf("\nYou'll pay R$ 400,00 per month.");}

    return 0;
}    