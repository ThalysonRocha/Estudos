/*
Imposto de Renda
Faça o cálculo do imposto de renda baseado no salário mensal considerando as alíquotas da Tabela 1.

Tabela 1:
Base de cálculo mensal em R$	Alíquota %	 Parcela a deduzir do imposto em R$
Até 1.903,98	                    –	                   –
De 1.903,99 até 2.826,65	       7,5	                142,80
De 2.826,66 até 3.751,05	       15,0	                354,80
De 3.751,06 até 4.664,68	       22,5	                636,13
Acima de 4.664,68	               27,5	                869,36

O valor do imposto deve ser calculado segundo esta fórmula:

tax = salary * taxRate - deduction  */

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float salary, taxrate, deduction, result;

    printf("How much do you earn ? \n");
    scanf("%f", &salary);

    if(salary <= 1903.98){taxrate = 0; deduction = 0;}
    else if((salary > 1903.98) && (salary <= 2826.65)) {taxrate = 0.075; deduction = 142.80;}
    else if((salary > 2826.65) && (salary <= 3751.05)) {taxrate = 0.15; deduction = 354.80;}
    else if((salary > 3751.05) && (salary <= 4664.68)) {taxrate = 0.225; deduction = 636.13;}
    else {taxrate = 0.275; deduction = 869.36;}

    result = (salary * taxrate) - deduction;

    printf("\nThe amount of tax to be payed is U$ %.2f", result);

    return 0;
}