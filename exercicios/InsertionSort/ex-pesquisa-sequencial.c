#include <stdio.h>

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

int pesquisaDesordenada(int vetor[], int total, int busca)
{
    int i;
    
    for (i = 0; i < total; i++)
    {
        if (vetor[i] == busca)    
            return i;
    }
    
    return -1;
}

int pesquisaOrdenada(int vetor[], int total, int busca)
{
    int i;

    for (i = 0; i < total; i++)
    {
        if (vetor[i] == busca)    
            return i;
        else
            if (vetor[i] > busca)
                return -1;   
    }
    
    return -1;
}

void pesquisa (int vetor[], int total, int ordenada)
{
	int valor, posicao;

	printf("\nQual valor deseja buscar: ");
	scanf("%d", &valor);

	switch (ordenada)
	{
		case 1:
			posicao = pesquisaDesordenada(vetor, total, valor);
			break;
		case 2:
			posicao = pesquisaOrdenada(vetor, total, valor);
			break;
	}

	if (posicao == -1)
		printf("\n\nO valor pesquisado nao existe no vetor.");
	else
		printf("\n\nO valor pesquisado esta na posicao %d", posicao);
}


int main()
{
	int produtos[20] = {25, 65, 67, 91, 69 , 24, 10, 25, 62, 52, 86, 1, 6, 43, 82, 18, 32, 26, 9, 10};

	int opcao;

	printf("Digite se deseja ser desordenada ou ordenada (1 ou 2): ");
	scanf("%d", &opcao);

	switch (opcao)
	{
		case 1:
			pesquisa (produtos, 20, 1);

			for (int i=0; i<20; i++)
        			printf("\n%d", produtos[i]);
			break;
		case 2: 
			insertionSort(produtos, 20);
			pesquisa (produtos, 20, 2);

			for (int i=0; i<20; i++)
        			printf("\n%d", produtos[i]);
			break;
	}
	printf("\n");
}

