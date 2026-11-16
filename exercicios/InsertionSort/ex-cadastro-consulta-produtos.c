#include <stdio.h>

int produtos[100], totalProdutos = 0, valorAtual = 0;

void insertionSort(int vetor[], int total)
{
    int i, auxiliar, j;

    for (i = 1; i < total; i++)
    {
        auxiliar = vetor[i];
        j = i - 1;

        while (j >= 0 && vetor[j] > auxiliar)
        {
            vetor[j + 1] = vetor[j];
            j = j - 1;
        }

        vetor[j + 1] = auxiliar;
    }
}

int pesquisaBinaria(int vetor[], int total, int busca)
{
    int inicio = 0, fim = total - 1, meio;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;

        if (vetor[meio] == busca)
            return meio;
        else
            if (vetor[meio] < busca)
                inicio = meio + 1;
            else
                fim = meio - 1;
    }

    return -1;
}

void entrada()
{
    int quantidade;

    printf("\nDigite a quantidade de produtos que deseja cadastrar: ");
    scanf("%d", &quantidade);

    if (quantidade <= 0 || quantidade > 100 - totalProdutos)
    {
        printf("\nQuantidade invalida! Limite de 100 produtos.\n");
    }
    else
    {
        for (int i = 0; i < quantidade; i++)
        {
            printf("Digite o codigo do produto %d: ", totalProdutos + 1);
            scanf("%d", &produtos[totalProdutos]);

            totalProdutos++;
        }

        insertionSort(produtos, totalProdutos);

        printf("\nProdutos cadastrados com sucesso!\n");
    }
}

void ordenar()
{
    insertionSort(produtos, totalProdutos);
}

void mostrar()
{
    printf("\n--- Produtos cadastrados em ordem crescente ---\n");

    if (totalProdutos == 0)
    {
        printf("Nenhum produto cadastrado.\n");
    }
    else
    {
        for (int i = 0; i < totalProdutos; i++)
        {
            printf("Codigo: %d\n", produtos[i]);
        }
    }
}

void pesquisa()
{
    int posicao;

    if (totalProdutos == 0)
    {
        printf("\nNenhum produto cadastrado para pesquisa.\n");
    }
    else
    {
        printf("\nDigite o codigo do produto que deseja consultar: ");
        scanf("%d", &valorAtual);

        posicao = pesquisaBinaria(produtos, totalProdutos, valorAtual);

        if (posicao == -1)
            printf("\nProduto nao encontrado no sistema.\n");
        else
            printf("\nProduto encontrado!\n");
    }
}

int main()
{
    int opcao;

    do
    {
        printf("1 - Cadastrar novos produtos\n");
        printf("2 - Exibir produtos ordenados\n");
        printf("3 - Buscar produto pelo codigo\n");
        printf("4 - Encerrar programa\n\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao)
        {
            case 1:
                entrada();
                break;

            case 2:
                ordenar();
                mostrar();
                break;

            case 3:
                pesquisa();
                break;

            case 4:
                printf("\nEncerrando o sistema...\n");
                break;

            default:
                printf("\nOpcao invalida! Tente novamente.\n");
        }

    } while (opcao != 4);

    return 0;
}