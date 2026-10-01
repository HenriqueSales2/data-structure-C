#include <stdio.h>

void zerarVetor(int nomeVetor[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		nomeVetor[i] = 0;
	}
}

int ordenacao(int primeiroNumero, int segundoNumero, int terceiroNumero)
{
	if (primeiroNumero == segundoNumero && segundoNumero == terceiroNumero)
	{
		printf("Valores iguais.");
	}

	else
		if (primeiroNumero <= segundoNumero && primeiroNumero <= terceiroNumero)
		{
			printf("%d, ", primeiroNumero);
			if (segundoNumero < terceiroNumero)
			{
				printf("%d, %d\n", segundoNumero, terceiroNumero);
			}
			else
			{
				printf("%d, %d\n", terceiroNumero, segundoNumero);
			}
		}
		else
			if (segundoNumero <= primeiroNumero && segundoNumero <= terceiroNumero)
			{
				printf("%d, ", segundoNumero);
				if (primeiroNumero < terceiroNumero)
				{
					printf("%d, %d\n", primeiroNumero, terceiroNumero);
				}
				else
				{
					printf("%d, %d\n", terceiroNumero, primeiroNumero);
				}
			}
			else
			{
				printf("%d, ", terceiroNumero);
				if (primeiroNumero < segundoNumero)
				{
					printf("%d, %d\n", primeiroNumero, terceiroNumero);
				}
				else
				{
					printf("%d, %d\n", segundoNumero, primeiroNumero);
				}
			}
}

void exibir()
{
	int valores[3];

	zerarVetor(valores, 3);
	printf("Digite o primeiro numero: ");
	scanf("%d", &valores[0]);

	printf("Digite o segundo numero: ");
	scanf("%d", &valores[1]);

	printf("Digite o terceiro numero: ");
	scanf("%d", &valores[2]);

	printf("Ordem crescente: ");

	ordenacao(valores[0], valores[1], valores[2]);

	printf("\n");
}

int main()
{
	exibir();
	return 0;
}