/*Construa uma função que receba como parametro o raio de uma circunferencia e retorne o valor
da área da mesma. Considere pi= 3,14*/

#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

int circlearea(float radius)
{
    float result;

    result = 3.14 * (radius * radius);

    return (result);
}

int circlediameter(float radius)
{
    float result;

    result = 2 * radius;

    return (result);
}

int circleperimeter(float radius)
{
    float result;

    result = (6.28) * radius; //(2 * pi) = 6,28

    return (result);
}

int main()
{
    char option;
    float radius, result;

    printf("Which measure do you want ?\n"
    "\'A\' - Area.\n"
    "\'D\' - Diameter.\n"
    "\'P\' - Perimeter.\n"
    "Type the correspondent letter to choose: ");
    scanf("%c", &option);
    option = toupper(option);

    system("cls");
    printf("OPTION - %c\n", option);
    

    printf("\nWhat is the radius in cm ?\n");
    scanf("%f", &radius);

    switch(option)
    {
        case 'A':
        {result = circlearea(radius);
        printf("\nThe result is %.2f m2", result/100);}

        case 'D':
        {result = circlediameter(radius);
        printf("\nThe result is %.2f cm", result);}

        case 'P':
        {result = circleperimeter(radius);
        printf("\nThe result is %.2f cm", result);}
    }

    printf("\n\nEND");
    return 0;
}