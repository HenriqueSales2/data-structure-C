#include <stdio.h>

int main()
{	
	int vetor[10], i = 0, j = 0, tamanhoVetor = 4, maiorElemento = 0;

	for(i = 0; i < tamanhoVetor; i++)
	{
		printf("Entre com o valor: ");
		scanf("%d", &vetor[i]);
		maiorElemento = vetor[0];
		
		for (j = 0; j < tamanhoVetor; j++)
		{
			if (vetor[j] > maiorElemento)
			{
				maiorElemento = vetor[j];
			}	
		}			
	}
	printf("O maior valor dentre esses números é: %d\n", maiorElemento);
	
	return 0;
}
