#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

double saldo, valor;
float taxa, extrato[10];
char opcao;
int pos, tamanho = 10, i=0, novamente = 1;

#define ANSICOLOR_RED "\x1b[31m" //mudar a cor da fonte para vermelho
#define ANSICOLOR_GREEN "\x1b[32m" //mudar a cor da fonte para verde
#define ANSICOLOR_RESET "\x1b[37m" //mudar a cor da fonte para default(branco)

double depositar()
{
    printf("\nDigite quanto deseja depositar:");
    printf("\nR$ ");
    scanf("%lf", &valor);
    printf("\nInsira o envelope.");
    _sleep(2000);
    printf("\n\nPronto, o valor ja foi adicionado a sua conta !");   

    saldo = saldo + valor;
    extrato[pos] = valor;
    pos++;
    return saldo, pos;
}

double sacar()
{
    printf("\nDigite quanto deseja sacar:");
    printf("\nR$ ");
    scanf("%lf", &valor);
    printf("Aguarde um instante....");
    _sleep(2000); //pausa o programa por dois segundos.
    
    //Confere se é possivel realizar o saque sem retirar todo o dinheiro da conta
    if (valor > saldo) printf("Voce nao possui este valor disponivel para saque.");
    else               printf("\n\nPronto, retire o dinheiro no local indicado com uma seta verde.");
    
    saldo = saldo - valor;
    extrato[pos] = valor * -1;
    pos++;
    taxa = taxa + 2;
    return saldo, pos, taxa;
}

char operacao()
{
    printf("\nQual operacao deseja realizar ?\n"
    "Digite a opcao correspondente.\n"
    "D - Deposito\n"
    "S - Saque\n"
    "E - Exibir Extrato\n"
    "0 - Exibir Saldo\n"
    "\nDigite aqui: ");
    scanf("%s", &opcao);

    return opcao;
}

int main()
{
    printf("SEJA BEM VINDO !\n\n");

    while (novamente == 1)
    {
        operacao();

        opcao = toupper(opcao);

        system("cls");

        switch(opcao)
        {
        case '0':
            printf("\n\nSeu saldo e de R$ %.2lf", saldo);
            break;
        
        case 'D':
            depositar();
            break;

        case 'S':
            sacar();
            break;

        case 'E':
            printf("\n\nExtrato: { ");
            for (i=0; i<tamanho; i++)
            {
                if (extrato[i] < 0)
                {
                    printf("[ ");
                    printf(ANSICOLOR_RED "%.2lf" ANSICOLOR_RESET, extrato[i]);
                    printf(" ]");
                }
                else if (extrato[i] > 0)
                {
                    printf("[ ");
                    printf(ANSICOLOR_GREEN "%.2lf" ANSICOLOR_RESET, extrato[i]);
                    printf(" ]");
                }
                else
                    break;

            }
            printf(" }");
            break;
            
        }

        printf("\n\nDeseja realizar uma nova operacao ?\n"
        "Digite a opcao correspondente.\n"
        "0 - NAO\n"
        "1 - SIM\n"
        "\nDigite aqui: ");
        scanf("%d", &novamente);

    }
        

    printf("\nSeu saldo e de R$ %.2lf", saldo);
    printf("\nDevido aos saques efetuados, voce devera pagar uma taxa de R$ %.2f esse mes.", taxa);

    printf("\n\nRetire seu cartao.");

    printf("\n\nTenha um bom dia !");
    return 0;

}
