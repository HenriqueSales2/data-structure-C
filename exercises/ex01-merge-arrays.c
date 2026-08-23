#include <stdio.h>

int main()
{
	int primeiroVetor[10], segundoVetor[10], terceiroVetor[20], tamanhoTerceiroVetor = 20, tamanhoVetor = 10, tamanhoTotalElementos = 19, i = 0;


	for(i = 0; i < tamanhoVetor; i++)	
	{
		printf("Entre com os primeiros valores: ");
		scanf("%d", &primeiroVetor[i]);	

	}

	for(i = 0; i < tamanhoVetor; i++)
	{
		printf("Entre com os próximos valores: ");
		scanf("%d", &segundoVetor[i]);

	}

	for(i = 0; i < tamanhoTerceiroVetor; i++)
	{
		if (i < tamanhoVetor)
		{
			terceiroVetor[i] = primeiroVetor[i];	
		}

		if (i >= tamanhoVetor) 
		{
			terceiroVetor[i] = segundoVetor[i - 10];
		}
	}

	printf("Terceiro Vetor: [ ");

	for (i = 0; i < tamanhoTerceiroVetor; i++)
	{
		if (i < tamanhoTotalElementos)
		{
			printf("%d, ", terceiroVetor[i]);
		}
		else
		{
			printf("%d", terceiroVetor[i]);
		}	
	}

	printf(" ]\n");

	return 0;
}	
