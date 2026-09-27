#include <stdio.h>

int feriasAcumuladas[5], feriasTiradas[5], totalFerias[5];
char nome[5][20];

void zerarVetor(int nomeVetor[], int tamanho)
{
	for (int i = 0; i < tamanho; i++)
	{
		nomeVetor[i] = 0;
	}
}

void removerBarraN(int i)
{
	for (int j = 0; nome[i][j] != '\0'; j++)
	{
		if (nome[i][j] == '\n')
		{
			nome[i][j] = '\0';
			break;
		}
	}
}

int calcularFerias(int acumuladas, int tiradas)
{
	int total = acumuladas - tiradas;
	return total;
}

void inserirDados(int tamanho)
{
	zerarVetor(feriasAcumuladas, 5);
	zerarVetor(feriasTiradas, 5);
	zerarVetor(totalFerias, 5);

	for (int i = 0; i < tamanho; i++)
	{	
		printf("\nDigite seu nome: ");
		fgets(nome[i], sizeof(nome[i]), stdin);

		removerBarraN(i);

		printf("Informe os dias de ferias acumulados: ");
		scanf("%d", &feriasAcumuladas[i]);

		printf("Informe os dias de ferias ja tirados: ");
		scanf("%d", &feriasTiradas[i]);

		totalFerias[i] = calcularFerias(feriasAcumuladas[i], feriasTiradas[i]);

		while (getchar() != '\n');
	}
	printf("\n");
}

void saldoFerias(int tamanho)
{
		for (int i = 0; i < tamanho; i++)
		{
			printf("Saldo de ferias de %s: %d dias\n", nome[i], totalFerias[i]);
		}
	printf("\n");
}

void maiorSaldoFerias(int tamanho)
{
	int saldoFerias = totalFerias[0];

	for (int i = 0; i < tamanho; i++)
	{
		if (totalFerias[i] > saldoFerias)
		{
			saldoFerias = totalFerias[i];
		}

	}
	printf("Maior saldo de ferias: ");
	int contador = 0;

	for (int i = 0; i < tamanho; i++)
	{
		if (totalFerias[i] == saldoFerias)
		{
			if (contador > 0)
			{
				printf(" e ");
			}
			printf("%s", nome[i]);
			contador++;
		}
	}

	printf(" (%d dias)\n",saldoFerias);
}

void menorSaldoFerias(int tamanho)
{
	int saldoFerias = totalFerias[0];

	for (int i = 0; i < tamanho; i++)
	{
		if (totalFerias[i] < saldoFerias)
		{
			saldoFerias = totalFerias[i];
		}

	}
	printf("Menor saldo de ferias: ");
	int contador = 0;

	for (int i = 0; i < tamanho; i++)
	{
		if (totalFerias[i] == saldoFerias)
		{
			if (contador > 0)
			{
				printf(" e ");
			}
			printf("%s", nome[i]);
			contador++;
		}
	}

	printf(" (%d dias)\n",saldoFerias);
}

void exibirDados()
{
	saldoFerias(5);
	maiorSaldoFerias(5);
	menorSaldoFerias(5);
}	

int main()
{ 
	inserirDados(5);
	exibirDados();
	return 0;
}
