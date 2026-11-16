#include <stdio.h>

int codigos[5];

void iniciar_vetor(int vetor[], int tamanho)
{
    for (int i = 0; i < tamanho; i++)
    {
        vetor[i] = 0;
    }
}

void entrada_usuario(int tamanho)
{
    if (tamanho <= 5)
    {
        iniciar_vetor(codigos, tamanho);

        for (int i = 0; i < tamanho; i++)
        {
            printf("Digite o codigo do produto: ");
            scanf("%d", &codigos[i]);
        }
    }
    else
    {
        printf("\nErro: A quantidade de produtos deve ser menor ou igual a 5.\n\n");
    }
}

void bsort(int vetor[], int tamanho)
{
    int i, j, k = 0;
    for (i = 0; i < tamanho - 1; i++)
    {
        for (j = 0; j < tamanho - (i + 1); j++)
        {
            if (vetor[j] > vetor[j + 1])
            {
                k = vetor[j]; // k = 2
                vetor[j] = vetor[j + 1];
                vetor[j + 1] = k;
            }
        }
    }
}

int pesquisa_binaria(int vetor[], int busca, int tamanho)
{
    int inicio = 0, meio, fim = tamanho - 1;

    while (inicio <= fim)
    {
        meio = (inicio + fim) / 2;
        if (vetor[meio] == busca)
            return meio;
        if (busca < vetor[meio])
            fim = meio - 1;
        else
            inicio = meio + 1;
    }
    return -1;
}

void exibir_produtos_ordenados(int tamanho)
{
    bsort(codigos, tamanho);

    for (int i = 0; i < tamanho; i++)
    {
        printf("Produto %d | Codigo %d\n", i + 1, codigos[i]);
    }
}

void buscar_produto_codigo(int tamanho)
{
    int respostaDoUsuario = 0;
    printf("Digite o codigo do produto que deseja buscar: ");
    scanf("%d", &respostaDoUsuario);

    int codigoProduto = pesquisa_binaria(codigos, respostaDoUsuario, tamanho);

    if (codigoProduto != -1)
    {
        printf("\nProduto %d | Codigo %d\n", codigoProduto + 1, codigos[codigoProduto]);
    }
    else
    {
        printf("\nO codigo do produto nao existe. Tente novamente!\n");
    }
}

void menu_interativo(int tamanho)
{
    int opcao = 0;
    do
    {
        printf("\n1 - Cadastrar novos produtos\n");
        printf("2 - Exibir todos os produtos ordenados\n");
        printf("3 - Buscar um produto pelo codigo\n");
        printf("4 - Encerrar programa\n\n");
        printf("Digite o numero correspondente da opcao desejada: ");
        scanf("%d", &opcao);
        printf("\n");

        switch (opcao)
        {
        case 1:
            entrada_usuario(tamanho);
            break;
        case 2:
            exibir_produtos_ordenados(tamanho);
            break;
        case 3:
            buscar_produto_codigo(tamanho);
            break;
        case 4:
            printf("Encerrando o programa...\n\n");
            break;
        default:
            printf("Selecione uma opcao valida!\n");
            break;
        }
    } while (opcao != 4);
}

int main()
{
    menu_interativo(3);
    return 0;
}