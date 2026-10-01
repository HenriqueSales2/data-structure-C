#include <stdio.h>

float validacao(float primeiroNumero, float segundoNumero, float terceiroNumero)
{
	if (primeiroNumero > segundoNumero && primeiroNumero > terceiroNumero)
	{
		return primeiroNumero;
	}
	if (segundoNumero > primeiroNumero && segundoNumero > terceiroNumero)
	{
		return segundoNumero;
	}
	if (terceiroNumero > primeiroNumero && terceiroNumero > segundoNumero)
	{
		return terceiroNumero;
	}
}	

float maior_de_tres(float primeiroNumero, float segundoNumero, float terceiroNumero)
{
	return validacao(primeiroNumero, segundoNumero, terceiroNumero);
}	

float entrada()
{
	float numeros[3];

	printf("Digite o primeiro numero: ");
	scanf("%f", &numeros[0]);

	printf("Digite o segundo numero: ");
	scanf("%f", &numeros[1]);

	printf("Digite o terceiro numero: ");
	scanf("%f", &numeros[2]);

	return maior_de_tres(numeros[0], numeros[1], numeros[2]);
}	

void saida()
{
	printf("O maior dos tres numeros eh: %.2f\n", entrada());
}	

int main()
{
	saida();
	return 0;
}