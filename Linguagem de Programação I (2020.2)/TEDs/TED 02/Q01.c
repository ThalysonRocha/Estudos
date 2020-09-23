/*Calculadora:
Monte uma calculadora por meio de dois valores numéricos e um operador aritmético.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    float num1, num2;
    char operationsymbol;
    
    printf("Welcome !\n\n");
   
    printf("Wich operation you want to do ?\n" 
    "Select from the options below, indicating with the corresponding symbol:\n"
    "+ = Sum \n"
    "- = Subtraction \n"
    "* = Multiplication \n"
    "/ = Division \n"
    "\nOperation: ");
    scanf("%c", &operationsymbol);

    printf("\nType the first number: \n");
    scanf("%f", &num1);
    printf("\nType the second number: \n");
    scanf("%f", &num2);

    printf("\n");

    switch (operationsymbol)
    {
    case ('+')://Sum
        printf("The result is %.2f", (num1 + num2));
        break;
    case ('-')://Subtraction
        printf("The result is %.2f", (num1 - num2));
        break;
    case ('*')://Multiplication
        printf("The result is %.2f", (num1 * num2));
        break;
    case ('/')://Division
        printf("The result is %.2f", (num1 / num2));
        break;
    }

    return 0;
}