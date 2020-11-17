/* Escreva um programa que receba dois structs do tipo dma,
cada um representando uma data válida, e calcule o número 
de dias que decorreram entre as duas datas.*/

#include <stdio.h>
#include <stdlib.h>


typedef struct
{
    int day;
    int month;
    int year;
}date;

date date1, date2;

int result, total1, total2;

int main()
{
    
    printf("[ FIRST DATE ]");

    printf("\n\nDAY: ");
    scanf("%d", &date1.day);
    printf("\nMONTH: ");
    scanf("%d", &date1.month);
    printf("\nYEAR: ");
    scanf("%d", &date1.year);


   printf("\n\n[ SECOND DATE ]");

    printf("\n\nDAY: ");
    scanf("%d", &date2.day);
    printf("\nMONTH: ");
    scanf("%d", &date2.month);
    printf("\nYEAR: ");
    scanf("%d", &date2.year);


    int a, b, c;

    //calculando a quantidade de dias da data 1
    a = date1.day - 1;

    c = date1.year / 400;
    c = c - date1.year / 100;
    c = (date1.year * 365) + (date1.year  / 4) + c;

    if (date1.month <= 1){ b = 0;}
    else if (date1.month = 2){ b = 31;}
    else if (date1.month = 3){ b = 59;}
    else if (date1.month = 4){ b = 90;}
    else if (date1.month = 5){ b = 120;}
    else if (date1.month = 6){ b = 151;}
    else if (date1.month = 7){ b = 181;}
    else if (date1.month = 8){ b = 212;}
    else if (date1.month = 9){ b = 243;}
    else if (date1.month = 10){ b = 273;}
    else if (date1.month = 11){ b = 304;}
    else if (date1.month >= 12){ b = 334;}

    total1 = a + b + c;

   //calculando a quantidade de dias da data 2
    a = date2.day - 1;

    c = date2.year / 400;
    c = c - date2.year / 100;
    c = (date2.year * 365) + (date2.year  / 4) + c;

    if (date2.month <= 1){ b = 0;}
    else if (date2.month = 2){ b = 31;}
    else if (date2.month = 3){ b = 59;}
    else if (date2.month = 4){ b = 90;}
    else if (date2.month = 5){ b = 120;}
    else if (date2.month = 6){ b = 151;}
    else if (date2.month = 7){ b = 181;}
    else if (date2.month = 8){ b = 212;}
    else if (date2.month = 9){ b = 243;}
    else if (date2.month = 10){ b = 273;}
    else if (date2.month = 11){ b = 304;}
    else if (date2.month >= 12){ b = 334;}

    total2 = a + b + c;

    result = total1 - total2;

    /*printf("The difference between %02d/%02d/%d and %02d/%02d/%d is:\n"
    "%d day(s)", date1.day, date1.month, date1.year, date2.day, date2.month, date2.year, abs(result));*/

    printf("The difference between these date is:\n"
    "%d day(s)", abs(result));
    
    return 0;
}