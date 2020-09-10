/* 1. Durante esses meses, o professor Marcelo resolveu desenvolver sistemas em home office (ele não fez isso, é só um exemplo).
Uma das soluções desenvolvida e em produção calcula o preço pago por cada cliente de acordo com o número de requisições 
executadas no servidor ao mês. Crie um programa que calcule o valor pago por cada cliente mensalmente, de acordo com o 
número de requisições realizadas. Uma outra informação é que há um desconto de 10% no valor total quando as requisições 
ultrapassam o valor de 10.000 requisições ao mês. Considere ainda que o cliente deve pagar R$ 1,15 a cada consulta. */

#include <stdio.h>
#include <stdlib.h>

const float CUSTO = 1.15; //Custo fixo da consulta
float consultas;
float preco;

int main()
{
printf("Quantas requisições foram realizadas neste mes ? ");
scanf("%f", &consultas);

    if (consultas > 10000)
    {
        preco = (consultas * CUSTO) * 0.9; //Aplicação do desconto de 10%
        printf("\nO valor a ser pago pelo cliente é de R$ %.2f", preco);
    }
    else
    {
       preco = (consultas * CUSTO);
        printf("\nO valor a ser pago pelo cliente é de R$ %.2f", preco);
    }
    
printf("\nFim  do programa !");
return 0; 

}