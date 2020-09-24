//Usando While

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, x;
    float result;

    printf("For what value do you want to calculate the harmonic series ? \n");
    scanf("%d", &x);

    while (i <= x)
    {
        result = result + (1.0 / i);
        i++;
    }
    

    printf("\nThe result is %.5f", result);

    return 0;
}
