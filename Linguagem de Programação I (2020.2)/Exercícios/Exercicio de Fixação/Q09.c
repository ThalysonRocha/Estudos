/* Crie um programa que receba a matrícula de um aluno, 03 notas obtidas em
avaliação e calcule a média de aproveitamento e a situação do aluno:
Média >= 7.0 (aprovado)
Média < 7.0 (reprovado)*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    char registration[20];
    float grade1, grade2, grade3, media;

    printf("What is your registration number ? \n");
    scanf("%s", &registration);

    printf("\nWhat is your first grade ? \n");
    scanf("%f", &grade1);
    printf("\nWhat is your second grade ? \n");
    scanf("%f", &grade2);
    printf("\nWhat is your third grade ? \n");
    scanf("%f", &grade3);

    media = (grade1 + grade2 + grade3) / 3;

    printf("\nID: %s\n", registration);
    if(media >= 7) {printf("Congratulations ! \nYou're approved.");}
    else           {printf("Better get ready, cuz \"o cinto vai comer\". You aren't approved.");}

    return 0;

}