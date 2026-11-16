#include <stdio.h>

int contador, produtos[5];

void apresentacao()
{
	printf("\nBEM VINDO AO SUPERMERCADINHO\n");
	printf("\n===================================\n\n");
}	

void entrada(int vetor[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
	printf("Digite o preco do produto: ");
	scanf("%d", &vetor[i]);
	}
}	

void insertionSort(int vetor[], int tamanho)
{
	int i, auxiliar, j;
	
	contador = 0;

	for (i = 1; i < tamanho; i++)
	{
		auxiliar = vetor[i]; 
		j = i - 1;

		contador = contador + 3;

		while (j >= 0 && vetor[j] > auxiliar)
		{
			vetor[j + 1] = vetor[j];
			j = j - 1;

			contador = contador + 3;
		}	

		vetor[j + 1] = auxiliar;
		contador++;
	}	
}

void saida(int vetor[], int tamanho)
{
	printf("\nPreços antes da ordenação:\n");
	for (int i = 0; i < tamanho; i++)
	{
		printf("%d ", vetor[i]);
	}

	printf("\n\nTotal de passos realizados: %d\n", contador);

	printf("\n===================================\n\n");
}	

int main()
{
	apresentacao();

	entrada(produtos, 5);

	printf("\n===================================\n");

	saida(produtos, 5);

	insertionSort(produtos, 5);

	printf("\n===================================\n");

	printf("\nInsertion Sort\n");
	saida(produtos, 5);
}