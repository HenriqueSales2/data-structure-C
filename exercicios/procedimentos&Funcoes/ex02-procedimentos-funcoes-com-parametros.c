#include <stdio.h>

float calcula_desconto(float produto, float desconto)
{
	return ((produto / 100) * desconto);
}

float entrada()
{
	float produto = 0, desconto = 0;
	printf("Digite o valor do produto: ");
	scanf("%f", &produto);
	printf("Digite o valor do desconto: ");
	scanf("%f", &desconto);
	return calcula_desconto(produto, desconto);
}	

void saida()
{		
	printf("O valor do produto ficou: %.2f\n", entrada());
}	

int main()
{
	saida();
	return 0;
}