#include <stdio.h>

void bsort(int vet[], int t)
{
	int i, j, k = 0;

	for (i = 0; i < t - 1; i++)
	{
		for (j = 0; j < t - (i + 1); j++)
		{
			if (vet[j] < vet[j + 1])
			{
				k = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = k;
			}
		}
	}
}

void maiorNumero(int vet[], int t)
{
	bsort(vet, t);
	int maiorNumero = vet[0];
	for (int i = 0; i < t; i++)
	{
		if (vet[i] > maiorNumero)
		{
			maiorNumero = vet[i];
		}
	}

	printf("O maior numero eh %d\n\n", maiorNumero);
	}

void menorNumero(int vet[], int t)
{
	bsort(vet, t);
	int menorNumero = vet[0];
	for (int i = 0; i < t; i++)
	{
		if (vet[i] < menorNumero)
		{
			menorNumero = vet[i];
		}
	}
	printf("O menor numero eh %d\n\n", menorNumero);
}

void mostrar()
{
	int x[10] = {23,54,67,34,76,23,65,61,21,12};

	menorNumero(x, 10);
	maiorNumero(x, 10);

	bsort(x, 10);

	for (int i = 0; i < 10; i++)
	{
		printf("%d ", x[i]);
	}
	printf("\n");
}

int main()
{
	mostrar();
	return 0;
}
