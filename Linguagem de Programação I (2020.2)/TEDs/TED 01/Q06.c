/*Faça um programa que leia um valor do tipo double e depois
o imprima na forma de notação científica.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    double num;
    printf("Digite um numero: \n");
    scanf("%lf", &num);

    double resultado;
    int potencia;
    if (num < 10)
    {
       resultado = num / 10;
       potencia = 1;
       goto fim;
    }
    if (num < 100)
    {
       resultado = num / 10;
       potencia = 1;
       goto fim;
    }
    if (num < 1000)
    {
       resultado = num / 100;
       potencia = 2;
       goto fim;
    }
    if (num < 10000)
    {
       resultado = num / 1000;
       potencia = 3;
       goto fim;
    }
    if (num < 100000)
    {
       resultado = num / 10000;
       potencia = 4;
       goto fim;
    }
    if (num < 1000000)
    {
       resultado = num / 100000;
       potencia = 5;
       goto fim;
    }
    if (num >= 1000000) //Decidi parar por aqui, acho que já cumpriu seu proposito kkk.
    {
       resultado = num / 100000;
       potencia = 6;
       goto fim;
    }

    fim:
    printf("\nO numero lido foi %.4lf .\n\n"
    "Em notacao cientifica o resultado eh: \n%lf x 10^%d", num, resultado, potencia);
    return 0;
}