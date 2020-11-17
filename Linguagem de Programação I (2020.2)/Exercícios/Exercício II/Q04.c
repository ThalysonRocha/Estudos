#include <stdlib.h>
#include <stdio.h>
#include <locale.h>

typedef struct{
    float partereal;
    float parteimaginaria;
}complexo;

complexo num1, num2;
int opcao;
float resultreal, resultimaginario;

int main(){

  setlocale(LC_ALL, "Portuguese");
  
  printf("Qual operação deseja realizar ?\n"
  "1 - Adicao\n"
  "2 - Subtracao\n"
  "3 - Multiplicacao\n"
  "Opcao: ");
  scanf("%d", &opcao);

  printf("Digite a parte real do primeiro numero: ");
  scanf("%f", &num1.partereal);

  printf("Digite a parte imaginaria do primeiro numero: ");
  scanf("%f", &num1.parteimaginaria);

  printf("Digite a parte real do segundo numero: ");
  scanf("%f", &num2.partereal);

  printf("Digite a parte imaginaria do segundo numero: ");
  scanf("%f", &num2.parteimaginaria);

  switch (opcao){

    case 1: //SOMA
      resultreal = num1.partereal + num2.partereal;
      resultimaginario = num1.parteimaginaria + num2.parteimaginaria;

      printf("O resultado é (%.1f + (%.1f i) )", resultreal, resultimaginario);
      break;

    case 2: //SUBTRAÇÃO
      resultreal = num1.partereal - num2.partereal;
      resultimaginario = num1.parteimaginaria - num2.parteimaginaria;

      printf("O resultado é (%.1f + (%.1f i) )", resultreal, resultimaginario);
      break;

    case 3: //MULTIPLICAÇÃO
      resultreal = (num1.partereal * num2.partereal) - (num1.parteimaginaria * num2.parteimaginaria);
      resultimaginario = (num1.partereal * num2.parteimaginaria) + (num2.partereal * num1.parteimaginaria);

      printf("O resultado é (%.1f + (%.1fi) )", resultreal, resultimaginario);
      break;

  }

  return 0;
}