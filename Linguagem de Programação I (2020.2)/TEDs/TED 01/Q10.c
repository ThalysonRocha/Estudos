/*Elabore um programa que solicite ao usuário entrar com o valor do dia, 
mês e ano(inteiros). Em seguida, imprima os valores lidos separados por 
uma barra ( / ) */

int main()
{
    int dia, mes, ano;
    printf("Digite o dia: \n");
    scanf("%d", &dia);

    printf("\nDigite o mes: \n");
    scanf("%d", &mes);

    printf("\nDigite o ano: \n");
    scanf("%d", &ano);

    printf("\nA data digitada foi %02d/%d/%d .", dia, mes, ano);

    return 0;
}