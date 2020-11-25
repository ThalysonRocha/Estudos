#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

struct obra
{
    char nome[20];
    double orcamento;
}obras[10];

struct produto
{
  int quantprod;
  char nomeprod[20];
} listacompras[10];

int logado = 0;
int qnt_obra, OPCAO = 1, i, codigobra=1, codigoprod = 1;
double ORCAMENTO, CAIXA, DESPESAS;
char historico[999][140], mensagens[999][140], nome[20];

//FUNÇÕES GERAIS
int login()
{   
  char login[20], senha[6]; 
  char id[5][15] = {"gestor\n", "engenheiro\n", "mestre\n", "fornecedor\n","sair\n"}, senhas[4][10] = {"111\n", "222\n", "333\n", "444\n"};

  do{  
    printf("\nLOGIN: ");
    fgets(login, 20, stdin);
    fflush(stdin);

    printf("SENHA: ");
    fgets(senha, 6, stdin);
    fflush(stdin);

    
    if ((strcmp(login, id[0]) == 0) && (strcmp(senha, senhas[0]) == 0)){
      logado = 1;
    }
    else if ((strcmp(login, id[1]) == 0) && (strcmp(senha, senhas[1]) == 0)){
      logado = 2;
    }
    else if ((strcmp(login, id[2]) == 0) && (strcmp(senha, senhas[2]) == 0)){
      logado = 3;
    }
    else if ((strcmp(login, id[3]) == 0) && (strcmp(senha, senhas[3]) == 0)){
      printf("\nSeja bem vindo FORNECEDOR !");
      logado = 4;
    }
    else if (strcmp(login, id[4]) == 0){
      printf("\nPrograma encerrado!");
      logado = 99;
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

//FUNÇÕES PARA O GESTOR
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
  printf("\nSeja bem vindo GESTOR !");
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

      printf("\n\nO orcamento inicial para esta obra foi de R$ %.2lf\n", obras[OPCAO].orcamento);
      break;
    
    case  3:
      for (i = 0; i < 999; i++);{
        printf("\n%s", historico[i]);
      }
      break;

    case 0:
      printf("\nAtendimento encerrado.");
      OPCAO = 0;

    }
  }
  return 0;
}

//FUNÇÕES PARA O MESTRE
char nomeproduto()
{
  fflush(stdin);
  printf("\n\nPor favor digite o nome do produto a ser solicitado: \n");
  fgets(listacompras[codigoprod].nomeprod, 20, stdin);
  strcpy(nome, listacompras[codigoprod].nomeprod);

  nome[strcspn(nome, "\n")] = 0;
  
  return nome, listacompras[codigoprod].nomeprod;
  fflush(stdin);
}

int quantprod()
{
  printf("\nQual a quantidade de [ %s ] que voce deseja solicitar ?\nQuantidade: ", nome);
  scanf("%d", &listacompras[codigoprod].quantprod);
  system("cls");
  printf("Produto adicinado a lista.");
   
  return listacompras[codigoprod].quantprod;
  codigoprod++;
}

int mestre()
{
  printf("\nSeja bem vindo MESTRE DE OBRAS !");
  while(OPCAO != 0){
    printf("\nO que deseja fazer ?\n"
    "\nDigite a opcao correspondente:"
    "\n1 - Solicitar a compra de um produto."
    "\n2 - Confirmar recebimento da compra."
    "\n3 - Listar compras efetuadas."
    "\n4 - Solicitar a contratacao de um funcionario."
    "\n\n0 - Encerrar atendimento. \nOpcao: ");
    scanf("%d", &OPCAO);

    fflush(stdin);
    switch (OPCAO)
    {
    case 1:
      nomeproduto();
      quantprod(); 
      break;

    case 2:
      break;
    
    case  3:
      break;

    case 0:
      printf("\nAtendimento encerrado.");
      OPCAO = 0;
    
    }
  }
  return 0;
}

//FUNÇÕES PARA O ENGENHEIRO
int engenheiro()
{
  printf("\nSeja bem vindo ENGENHEIRO !");
  while(OPCAO != 0){
    printf("O que deseja fazer ?\n"
    "\nDigite a opcaoo correspondente:"
    "\n1 - Iniciar obra."
    "\n2 - Contratar funcionÃ¡rios."
    "\n3 - Verificar Custa da obra."
    "\n4 - Selecionar fornecedor e finalizar compra."
    "\n5 - Adicionar mensagem ao histÃ³rico da obra.");
    scanf("%d", &OPCAO);

    fflush(stdin);
    switch (OPCAO)
    {
    case 1:
      break;

    case 2:
      break;
    
    case  3:
      break;

    case 0:
      printf("\nAtendimento encerrado.");
      OPCAO = 0;
    
    }
  }
  return 0;
}

int fornecedor()
{
  printf("\nSeja bem vindo FORNECEDOR !");
  while(OPCAO != 0){
    printf("O que deseja fazer ?\n"
    "\nDigite a opÃ§Ã£o correspondente:"
    "\n1 - Visualizar solicitaÃ§Ãµes de compra."
    "\n2 - Adicionar valor de trÃªs fornecedores.");
    scanf("%d", &OPCAO);

    fflush(stdin);
    switch (OPCAO)
    {
    case 1:
      break;

    case 2:
      break;
    
    case  3:
      break;

    case 0:
      printf("\nAtendimento encerrado.");
      OPCAO = 0;
    
    }
  }
  return 0;
}


int main()
{
  printf("===PROGRAMA DE LOGIN===\n");

  do{
  login();
  system("cls");
  switch (logado)
  {
  case 1:
    gestor();
    break;
  
  case 2:
    engenheiro();
    break;
  
  case 3:
    mestre();
    break;
  
  case 4:
    fornecedor();
    break;
  }
  }while(logado != 99);

  printf("\n\nFIM");

  return 0;
}