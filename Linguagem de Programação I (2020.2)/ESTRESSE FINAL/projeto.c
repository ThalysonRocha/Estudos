#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct obra
{
    char nome[20];
    double orcamento;
}obras[10];

int logado = 0;
int qnt_obra, OPCAO = 1, i, codigobra=1;
double ORCAMENTO, CAIXA, DESPESAS;
char historico[999][140], mensagens[999][140];

int login()
{   
  char login[20], senha[6]; 
  char id[4][15] = {"gestor\n", "engenheiro", "MESTRE", "FORNECEDOR"}, senhas[4][10] = {"111\n", "222", "333", "444"};

  do{  
    printf("\nLOGIN: ");
    fgets(login, 20, stdin);
    fflush(stdin);

    printf("SENHA: ");
    fgets(senha, 6, stdin);
    fflush(stdin);

    
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

char nomeobra()
{   
  fflush(stdin);
  printf("\n\nPor favor digite o nome da obra: \n");
  fgets(obras[codigobra].nome, 20, stdin);

  return obras[codigobra].nome[19];
}

double orcamentoobra(){

  printf("\n\nAgora informe o orcamento disponivel para esta nova obra" 
  "\nR$: ");
  scanf("%lf", &obras[codigobra].orcamento);

  system("cls");
  printf("\nUma nova obra foi adicionada\n");
    
  return obras[codigobra].orcamento;
  codigobra++;
}

int gestor ()
{
  fflush(stdin);
  while(OPCAO != 0){
    printf("\nO que deseja fazer ?\n"
    "\nDigite a opcao correspondente:"
    "\n1 - Solicitar Nova Obra."
    "\n2 - Verificar custo da obra."
    "\n3 - Consultar historico da obra."
    "\n\n0 - Encerrar"
    "\nOpcao: ");
    scanf("%d", &OPCAO);
    
    fflush(stdin);
    switch (OPCAO)
    {
    case 1:
      nomeobra();
      orcamentoobra();
      break;

    case 2:
      printf("\nSelecione uma das obras" "\nEsta sao as obras em andamento:\n");

      for(i=1; i<10; i++)
      {   
        if(obras[i].orcamento == 0) { i = 50; }

        else{
        printf("\nOpcao: %d", i);
        printf("\n%s", obras[i].nome);
        printf("Orcamento Inicial -> R$ %.2lf \n\n", obras[i].orcamento);
        }
      }

      printf("Digite a OPCAO desejada: ");
      scanf("%d", &OPCAO);

      printf("\n\nO orçamento inicial para esta obra foi de R$ %.2lf\n", obras[OPCAO].orcamento);
      break;
    
    case  3:
      for (i = 0; i < 999; i++);{
        printf("\n%s", historico[i]);
      }
      break;

    default:
      printf("\nVoce nao selecionou nenhuma opcao, atendimento encerrado.");
      OPCAO = 0;
    
    //qnt_obra, ORCAMENTO;
    }
  }
  return 0;
}

int mestre()
{
  while(OPCAO != 0){
    printf("O que deseja fazer ?\n"
    "\nDigite a opção correspondente:"
    "\n1 - Solicitar a compra de um produto."
    "\n2 - Confirmar recebimento da compra."
    "\n3 - Listar compras efetuadas."
    "\n4 - Solicitar a contratação de um funcionário.");
    scanf("%d", &OPCAO);
  }
  return 0;
}

int engenheiro()
{
  while(OPCAO != 0){
    printf("O que deseja fazer ?\n"
    "\nDigite a opção correspondente:"
    "\n1 - Iniciar obra."
    "\n2 - Contratar funcionários."
    "\n3 - Verificar Custa da obra."
    "\n4 - Selecionar fornecedor e finalizar compra."
    "\n5 - Adicionar mensagem ao histórico da obra.");
    scanf("%d", &OPCAO);

  }
  return 0;
}

int fornecedor()
{
  while(OPCAO != 0){
    printf("O que deseja fazer ?\n"
    "\nDigite a opção correspondente:"
    "\n1 - Visualizar solicitações de compra."
    "\n2 - Adicionar valor de três fornecedores.");
    scanf("%d", &OPCAO);
  }    
  return 0;

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
  
  case 2:
    printf("Seja bem vindo ENGENHEIRO");
    engenheiro();
    break;
  
  case 3:
    printf("Seja bem vindo MESTRE DE OBRAS");
    mestre();
    break;
  
  case 4:
    printf("Seja bem vindo FORNECEDOR");
    fornecedor();
    break;
  

  printf("\n\nFIM");

  return 0;
}
}