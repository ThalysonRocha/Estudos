#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int logado = 0;
int qnt_obra, OPCAO, i;
double ORCAMENTO, CAIXA, DESPESAS;
char historico[999][140], mensagens[999][140];

void login()
{   
  char login[20], senha[6]; 
  char id[4][15] = {"gestor", "engenheiro", "MESTRE", "FORNECEDOR"}, senhas[4][10] = {"111", "222", "333", "444"};

  do{  
    printf("\nLOGIN: ");
    gets(login);
    printf("SENHA: ");
    gets(senha);

    
    if ((strcmp(login, id[0]) == 0) && (strcmp(senha, senhas[0]) == 0)){
      printf("\nSeja bem vindo GESTOR !");
      logado = 1;
    }
    else if ((strcmp(login, id[1]) == 0) && (strcmp(senha, senhas[1]) == 0)){
      printf("\nSeja bem vindo ENGENHEIRO !");
      logado = 2;
    }
    else if ((strcmp(login, id[2]) == 0) && (strcmp(senha, senhas[2]) == 0)){
      printf("\nSeja bem vindo MESTRE DE OBRAS !");
      logado = 3;
    }
    else if ((strcmp(login, id[3]) == 0) && (strcmp(senha, senhas[3]) == 0)){
      printf("\nSeja bem vindo FORNECEDOR !");
      logado = 4;
    }
    else{
      printf("\nLogin e/ou senha invalidos\n");
      printf("\nTente novamente !");
      printf("\n___________________\n");
      logado = 0;
    }
  }
    while (logado == 0);
    return logado;
}

int gestor ()
{
  while(OPCAO != 0){
    printf("\nO que deseja fazer ?\n"
    "\nDigite a opção correspondente:"
    "\n1 - Solicitar Nova Obra."
    "\n2 - Verificar custo da obra."
    "\n3 - Consultar histórico da obra."
    "\n0 - SAIR"
    "\nOPCAO: ");
    scanf("%d", &OPCAO);

    switch (OPCAO)
    {
    case 1:
      printf("\n\nUma nova obra foi adicionada, por favor, digite o orçamento disponivel para esta nova obra" 
      "\nR$: ");
      scanf("%lf", &ORCAMENTO);
      qnt_obra = 1;
      break;

    case 2:
      printf("\n\nO orçamento inicial para esta obra foi de R$ %.2lf\n", ORCAMENTO);
      printf("\nAte este momento foram gastos R$ %.2lf\n", DESPESAS);
      printf("\nAinda restam R$ %.2lf\n", CAIXA);
      break;
    
    case  3:
      for (i = 0; i < 999; i++);{
        printf("\n%s", historico[i]);
      }
      break;

    default:
      printf("\nVoce nao selecionou nenhuma opcao, atendimento encerrado.");
      OPCAO = 0;
    
    return qnt_obra, ORCAMENTO;
    }
  }

}

int main()
{
  printf("===PROGRAMA DE LOGIN===\n");

  login();

  switch (logado)
  {
  case 1:
    printf("Seja bem vindo GESTOR");
    gestor();
    break;
  }

  printf("\n\nFIM");

  return 0;
}
