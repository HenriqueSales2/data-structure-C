#include <stdio.h>

void selection_sort(int vet[], int t)
{
	int i, j, min, aux;

	for (i = 0; i < (t - 1); i++)
	{
		min = i;
		for (j = (i + 1); j < t; j++)
		{
			if (vet[j] < vet[min])
				min = j;
		}

		if (i != min)
		{
			aux = vet[i];
			vet[i] = vet[min];
			vet[min] = aux;
		}
	}	
}	

int main()
{
	int x[10] = {53, 35, 16, 89, 67, 81, 43, 29, 82, 46};
	int i;

	selection_sort(x, 10);

	printf("\nVetor ordenado:\n");
	for (i = 0; i < 10; i++)
	{
		printf("%d\n", x[i]);
	}	

	return 0;
}	
