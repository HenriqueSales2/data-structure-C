#include <stdio.h>

void validacaoCrianca(int idade)
{
	if (idade >= 0 && idade <= 12)
	{
		printf("Crianca\n");
	}
}

void validacaoAdolescente(int idade)
{
	if (idade >= 13 && idade <= 17)
	{
		printf("Adolescente\n");
	}
}

void validacaoAdulto(int idade)
{
	if (idade >= 18 && idade <= 59)
	{
		printf("Adulto\n");
	}
}

void validacaoIdoso(int idade)
{
	if (idade >= 60 && idade <= 120)
	{
		printf("Idoso\n");
	}
}

void excecaoIdade(int idade)
{
	if (idade < 0 || idade > 120)
	{
		printf("Idade invalida! Tente novamente.\n");
	}
}

void resultadoValidacao(int idade)
{
	validacaoCrianca(idade);
	validacaoAdolescente(idade);
	validacaoIdoso(idade);
	excecaoIdade(idade);
}	

void categoria_idade(int idade)
{
	resultadoValidacao(idade);
}	

int main()
{
	int idade = 0;
	printf("Digite sua idade: ");
	scanf("%d", &idade);
	categoria_idade(idade);
	return 0;
}