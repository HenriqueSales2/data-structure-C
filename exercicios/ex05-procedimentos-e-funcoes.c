#include <stdio.h>

int main()
{
     int i = 0, j = 0, opcao[1] = {0};
     float gastos[5] = {0}, operacao[5] = {0}, tamanhoGasto[1] = {0};
     char continua[1] = {0}, alimento[10] = "alimento", transporte[11] = "transporte", lazer[6] = "lazer", saude[6] = "saude", educacao[10] = "educacao";

     printf("Bem-vindo ao sistema de gastos mensais\n\n");

     do
     {
          printf("Insira o gasto com Alimentacao: ");
          scanf("%f", &gastos[0]);

          printf("Insira o gasto com Transporte: ");
          scanf("%f", &gastos[1]);

          printf("Insira o gasto com Lazer: ");
          scanf("%f", &gastos[2]);

          printf("Insira o gasto com Saude: ");
          scanf("%f", &gastos[3]);

          printf("Insira o gasto com Educacao: ");
          scanf("%f", &gastos[4]);

          printf("\n");

          printf("Escolha uma das opcoes abaixo: \n\n");

          printf("1 - Total de gastos\n");
          printf("2 - Media mensal dos gastos\n");
          printf("3 - Maior gasto\n");
          printf("4 - Menor gasto\n");
          scanf("%d", &opcao[0]);

          switch (opcao [0])
          {
               case 1:
                    operacao[0] = gastos[0] + gastos[1] + gastos[2] + gastos[3] + gastos[4];
                    printf("Total de gastos: R$ %.2f\n\n", operacao[0]);
                    break;

               case 2:
                    operacao[1] = (gastos[0] + gastos[1] + gastos[2] + gastos[3] + gastos[4]) / 5;
                    printf("A media mensal de gastos foi: R$ %.2f\n\n", operacao[1]);
                    break;

               case 3:
                    for (i = 0; i < sizeof(gastos[5]); i++)
                    {
                         tamanhoGasto[0] = gastos[0];


                         for (j = 0; j < sizeof(gastos[5]); j++)
                         {
                              if (gastos[j] > tamanhoGasto[0])
                              {
                                   tamanhoGasto[0] = gastos[j];

                              }
                         }
                    }
                    if (gastos[0] > gastos[1] && gastos[0] > gastos[2] && gastos[0] > gastos[3] && gastos[0] > gastos[4])
                    {
                         printf("Maior gasto: %s - R$%.2f\n\n", alimento, tamanhoGasto[0]);
                    }
                    if (gastos[1] > gastos[0] && gastos[1] > gastos[2] && gastos[1] > gastos[3] && gastos[1] > gastos[4])
                    {
                         printf("Maior gasto: %s - R$%.2f\n\n", transporte, tamanhoGasto[0]);
                    }
                    if (gastos[2] > gastos[0] && gastos[2] > gastos[1] && gastos[2] > gastos[3] && gastos[2] > gastos[4])
                    {
                         printf("Maior gasto: %s - R$%.2f\n\n", lazer, tamanhoGasto[0]);
                    }
                    if (gastos[3] > gastos[0] && gastos[3] > gastos[1] && gastos[3] > gastos[2] && gastos[3] > gastos[4])
                    {
                         printf("Maior gasto: %s - R$%.2f\n\n", saude, tamanhoGasto[0]);
                    }
                    if (gastos[4] > gastos[0] && gastos[4] > gastos[1] && gastos[4] > gastos[2] && gastos[4] > gastos[3])
                    {
                         printf("Maior gasto: %s - R$%.2f\n\n", educacao, tamanhoGasto[0]);
                    }
                    break;

               case 4:
                    for (i = 0; i < sizeof(gastos[5]); i++)
                    {
                         tamanhoGasto[0] = gastos[0];


                         for (j = 0; j < sizeof(gastos[5]); j++)
                         {
                              if (gastos[j] < tamanhoGasto[0])
                              {
                                   tamanhoGasto[0] = gastos[j];
                              }
                         }
                    }

                    if (gastos[0] < gastos[1] && gastos[0] < gastos[2] && gastos[0] < gastos[3] && gastos[0] < gastos[4])
                    {
                         printf("Menor gasto: %s - R$%.2f\n\n", alimento, tamanhoGasto[0]);
                    }
                    if (gastos[1] < gastos[0] && gastos[1] < gastos[2] && gastos[1] < gastos[3] && gastos[1] < gastos[4])
                    {
                         printf("Menor gasto: %s - R$%.2f\n\n", transporte, tamanhoGasto[0]);
                    }
                    if (gastos[2] < gastos[0] && gastos[2] < gastos[1] && gastos[2] < gastos[3] && gastos[2] < gastos[4])
                    {
                         printf("Menor gasto: %s - R$%.2f\n\n", lazer, tamanhoGasto[0]);
                    }
                    if (gastos[3] < gastos[0] && gastos[3] < gastos[1] && gastos[3] < gastos[2] && gastos[3] < gastos[4])
                    {
                         printf("Menor gasto: %s - R$%.2f\n\n", saude, tamanhoGasto[0]);
                    }
                    if (gastos[4] < gastos[0] && gastos[4] < gastos[1] && gastos[4] < gastos[2] && gastos[4] < gastos[3])
                    {
                         printf("Menor gasto: %s - R$%.2f\n\n", educacao, tamanhoGasto[0]);
                    }
                    break;
          }

               while (getchar() != '\n');

               printf("Deseja continuar? (s/n)\n");
               scanf("%c", &continua[0]);

     } while (continua[0] == 's' || continua[0] == 'S');

     printf("Obrigado por usar meu programa!");
     return 0;
}