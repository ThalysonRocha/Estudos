/* Uma loja fornece 20% de desconto para funcionários e 10% de desconto para
clientes vips. Faça um programa que calcule o valor total a ser pago por uma
pessoa. O programa deverá ler o valor total da compra efetuada e um código
que identifique se o comprador é um cliente comum (1), funcionário (2) ou vip
(3).*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int clienttype;
    float price;

    printf("Welcome !\n\n");

    printf("How much it cost ? \n");
    scanf("%f", &price);

    printf("\nSelect the code of client type:\n"
    "1 - Common Client\n"
    "2 - Employee\n"
    "3 - VIP"
    "\nOption: ");
    scanf("%d", &clienttype);

    switch (clienttype)
    {
    case 1:
        printf("\nThanks for buying !\nThe price is R$ %.2f", price);
        break;
    case 2:
        printf("\nYou are important to us !\n The price is R$ %.2f \nWork hard !", (price*0.8));
        break;
    case 3:
        printf("\nHi, do you come here often ? ;)\n" 
        "Just kidding, i know you love this place, you is a VIP Client.\n\n"
        "The final price is R$ %.2f \nIs always a pleasure to serve you. o/" , (price*0.9));
    }

    printf("\n\nGood bye, hope see you soon.");

    return 0;
}