#include <stdio.h>

int nota[15], valorAtual = 0;

void bsort(int vet[], int t)
{
	int i, j, k = 0;

	for (i = 0; i < t - 1; i++)
	{
		for (j = 0; j < t - (i + 1); j++)
		{
			if (vet[j] > vet[j + 1])
			{
				k = vet[j];
				vet[j] = vet[j+1];
				vet[j+1] = k;
			}
		}
	}
}

void maiorNumero()
{
	bsort(nota, 15);
	valorAtual = nota[0];
	for (int i = 0; i < 15; i++)
	{
		if (nota[i] > valorAtual)
		{
			valorAtual = nota[i];
		}
	}
}

void entrada()
{
	for (int i = 0; i < 15; i++)
	{
		printf("Digite uma nota de 0 a 10 para avaliar o servico: ");
		scanf("%d", &nota[i]);
	}
}

void mostrar()
{
	entrada();
	maiorNumero();
	if (valorAtual  < 0 || valorAtual > 10)
	{
		printf("Erro! Digite valores entre 0 e 10\n");
	}
	if (valorAtual == 10)
	{
		printf("Ótimo! Houve clientes totalmente satisfeitos.\n");
	}
	if (valorAtual >= 0 && valorAtual < 10)
	{
		printf("Nenhum cliente deu nota máxima.\n");
	}
	printf("\n");
}

int main()
{
	mostrar();
	return 0;
}