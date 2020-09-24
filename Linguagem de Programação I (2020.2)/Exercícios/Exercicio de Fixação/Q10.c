/*A equação de segundo grau é definida pela expressão ax
2 +bx + c. Faça um
programa que calcula as raízes da equação, para isso o programa deverá
receber os valores de a, b e c.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float a, b, c, delta, x1, x2;

    printf("What is the value of A ? \n");
    scanf("%f", &a);
    printf("\nWhat is the value of B ? \n");
    scanf("%f", &b);
    printf("\nWhat is the value of C ? \n");
    scanf("%f", &c);

    delta = powf(b, 2) - (4 * a * c );

    x1 = (((-b) + sqrt(delta)) / 2 * a);
    x2 = (((-b) - sqrt(delta)) / 2 * a);

    if (delta == 0)
    {
        printf("\nThis equation has only one root\n");
        printf("X' = %.3f\n", x1);
        printf("X\" = %.3f", x2);
    }
    else if (delta > 0)
    {
        printf("\nThis equation has two roots\n");
        printf("X' = %.3f\n", x1);
        printf("X\" = %.3f", x2);
    }
    else{printf("\nThis equation hasn't roots\n");}

    /*printf("\n%.2f", delta);
    printf("\n%.2f", x1);
    printf("\n%.2f", x2);*/

    return 0;
}