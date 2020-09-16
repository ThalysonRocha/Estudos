/*Escreva um programa que leia três variáveis, char, int e float.
Em seguida, imprima-as de três maneiras diferentes: separadas por
espaço, por tabulação horizontal e uma em cada linha. Use um unico
comando printf() para cada operação de escrita das três variáveis.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    //Declaração das variaveis
    char letra[999];
    int numerointeiro;
    float numeroreal;

    //Solicitando entrada dos dados
    printf("Digite uma letra: \n");
    scanf("%s", &letra);

    printf("\nDigite um numero inteiro: \n");
    scanf("%d", &numerointeiro);

    printf("\nDigite um numero real: \n");
    scanf("%f", &numeroreal);

    //Exibição dos dados
    printf("\nImprimindo separadas apenas por espaco: \n"
    "%s, %d, %.3f\n", letra, numerointeiro, numeroreal);

    printf("\nAgora separando por tabulacao horizontal: \n"
    "%s \t%d \t%.3f\n", letra, numerointeiro, numeroreal);

    printf("\nE por fim, exibindo um por linha: \n"
    "%s \n%d \n%.3f", letra, numerointeiro, numeroreal);

    return 0;
}