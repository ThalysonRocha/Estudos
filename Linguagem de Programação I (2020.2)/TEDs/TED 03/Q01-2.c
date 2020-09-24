//Utilizando While

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float chico = 1.50, ze = 1.10;
    int years;

    while(ze < chico)
    {
        years++;
        ze = ze + 0.03;
        chico = chico + 0.02;
    }

    printf("\nTo Ze become taller than Chico will be necessary %d years", years);

    return 0;
}