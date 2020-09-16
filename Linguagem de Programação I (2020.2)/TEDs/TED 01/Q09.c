/*Faça um programa que leia dois valores do tipo float. Use um
unico comando de leitura para isso. Em seguida, imprima os valores
lidos na ordem inversa em que foram lidos*/

#include <stdio.h.>
#include <stdlib.h>

int main ()
{
    int num1, num2;
    printf("Digite dois numeros, eles devem ser separados por virgula\n"
    "Exemplo (1, 2): \n");
    scanf("%d, %d", &num1, &num2);

    printf("Os numeros lidos foram %d e %d", num2, num1);

    /*Eu sei que é a maneira mais obvia, mas é unica que eu sei kkk*/
    
    return 0;

}