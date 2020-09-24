/*1. Chico tem 1,50 metro e cresce 2 centímetros por ano, enquanto Zé tem 1,10 metro
e cresce 3 centímetros por ano. Construa um programa que calcule e imprima quantos 
anos serão necessários para que Zé seja maior que Chico.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chico = 1.50, ze = 1.10;
    int years;

    for( ; ze < chico; years++)
    {
        ze = ze + 0.03;
        chico = chico + 0.02;
    }

    printf("\nTo Ze become taller than Chico will be necessary %d years", years);

    return 0;
}
