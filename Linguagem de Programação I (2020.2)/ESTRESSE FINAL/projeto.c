#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

int logado = 0;
int qnt_obra, OPCAO;
double ORCAMENTO, CAIXA;

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

void novaobra()
{   
    
    printf("Qual o orçamento da nova obra ?"
    "R$ :");
    scanf("%lf", &ORCAMENTO);

    qnt_obra = 1;

}

int main()
{
    printf("===PROGRAMA DE LOGIN===\n");

    login();

    switch (logado)
    {
    case 1:
        printf("O que deseja fazer ?\n"
        "\nDigite a opção correspondente:"
        "\n1 - Solicitar Nova Obra."
        "\n2 - Verificar custo da obra."
        "\n3 - Consultar histórico da obra.");
        scanf("%d", &OPCAO);

        
        break;
    
   

    }

    printf("\n\nFIM");

    return 0;
}