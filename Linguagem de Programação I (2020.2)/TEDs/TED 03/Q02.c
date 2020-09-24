/*Calcule o valor da série harmônica h por meio do valor de n usando a seguinte expressão:

h = 1/1 + 1/2 + ... + 1/n
Então, ao definir n com o valor inteiro 10 o resultado de h será 2,9289682539682538.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    printf("For what value do you want to calculate the harmonic series ? \n");
    scanf("%d", &x);

    for(i = 1 ; i <= x ; i++)
    {
        result = result + (1.0 / i);
    }

    printf("\nThe result is %.5f", result);

    return 0;
}
