#include <stdio.h>

int main()
{
	float totalVendas = 0.0, comissao = 0.0, bonus = 0.0;

	printf("Informe o valor total de vendas do mês: ");
	scanf("%f", &totalVendas);

	comissao = totalVendas * 0.10;

	if (totalVendas > 1000.0)
	{
		bonus = 50.0;
		totalVendas = totalVendas + bonus;
	}

	totalVendas = totalVendas + comissao + bonus;

	if (bonus == 0)
	{
		printf("O valor total das vendas considerando a comissão (%.2f) é de: %.2f\n", comissao, totalVendas);
	}	
	else 
	{	
		printf("O valor total das vendas considerando a comissão de %.2f e o bônus de %.2f é de : %.2f\n", comissao, bonus, totalVendas);
	}

	return 0;
}	
