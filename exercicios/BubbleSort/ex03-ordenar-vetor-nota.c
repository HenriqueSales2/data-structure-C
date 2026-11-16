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

void mostrar()
{
	int x[10] = {2, 6, 8, 1, 7, 3, 10, 6, 1, 7};

	bsort(x, 10);

	char aprovado[9] = "aprovado", reprovado[10] = "reprovado";

	for (int i = 0; i < 10; i++)
	{
		if (x[i] >= 6)
		{
			printf("%d %s\n", x[i], aprovado);
		}
		if (x[i] < 6)
		{
			printf("%d %s\n", x[i], reprovado);
		}
	}
	printf("\n");
}

int main()
{
	mostrar();
	return 0;
}