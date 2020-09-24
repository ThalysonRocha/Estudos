/* O IMC – Indice de Massa Corporal é um critério da Organização Mundial de
Saúde para dar uma indicação sobre a condição de peso de uma pessoa adulta.
A fórmula é IMC = peso / ( altura )^2. Elabore um programa que receba o peso e
a altura de um adulto e mostre sua condição de acordo com a tabela abaixo:*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float weight, bmi, height; //bmi é a sigla para Body Mass Index, IMC em português.

    printf("What is your weight in kilograms? \n");
    scanf("%f", &weight);

    printf("\nWhat is your height in centimeters? \n");
    scanf("%f", &height);

    bmi = weight / pow((height / 100), 2);

    printf("\nYour BMI is %.2f\n\n", bmi);
    
    if(bmi < 20)
    {
        printf("You are light like a feather, walk with a stone in your pocket");
    }
    else if(bmi >= 20 && bmi < 25)
    {
        printf("You have a normal weight.");
    }
    else if(bmi >= 25 && bmi < 30)
    {
        printf("You are overweight, but is just the beggining.\nStop with soda, fastfood and all the others crap.");
    }
    else if(bmi >= 30 && bmi < 40)
    {
        printf("You are a obese buddy, probably your knee hurts, you know what else will hurt soon?\n" 
        "Your heart, the heart attack is chasing you, DIET! NOW!");
    }
    else
    {
        printf("WTF ?!\nYou are a morbidly obese bro, how did you go so far?\n" 
        "Looking for a nutritionist and a psychologist, RIGHT NOW !!!");
    }
    
    printf("\n\nThanks for using, hope this helps. Take my advices...");
    return 0;

}