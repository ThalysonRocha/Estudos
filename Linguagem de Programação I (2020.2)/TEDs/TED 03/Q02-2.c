//Usando While

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int i=1, x;
    float result;

    printf("Para qual valor voce deseja calcular a serie harmonica ? \n");
    scanf("%d", &x);

    while (i <= x)
    {
        result = result + (1.0 / i);
        i++;
    }
    

    printf("\nO resultado e %.5f", result);

    return 0;
}