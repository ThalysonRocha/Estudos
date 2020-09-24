/* Em uma loja o valor final do produto é alterado pela forma de pagamento a
vista ou a prazo. Se o produto for pago à vista deve ser aplicado um desconto
de 10% no valor final, senão se for a prazo será o mesmo valor do produto.
Diante disso, faça um programa que receba o valor do produto e a forma de
pagamento, por fim informe o valor final do produto.*/

#include <stdio.h>
#include <stdlib.h>

int main()
{
    int paymethod;
    float price;

    printf("How much it cost ? \n");
    scanf("%f", &price);

    printf("\nSelect the code of payment method:\n" 
    "1 - Cash\n"
    "2 - Term"
    "\nOption: ");
    scanf("%d", &paymethod);

    switch(paymethod)
    {
        case 1:
        printf("\nNice ! \nThe final price is %.2f", price*0.9);
        break;

        case 2:
        printf("\nThe final price is %.2f", price);
        break;
    }
    return 0;
}