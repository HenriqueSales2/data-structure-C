#include <stdio.h>

void bsort(int vet[], int t)
{
  int i,j;
  float k=0;    	

  for (i=0;i<t-1;i++)
  {	
    for (j=0;j<t-(i+1);j++)
    {
        if (vet[j] > vet[j+1])
        {
          k=vet[j];
          vet[j]=vet[j+1];
          vet[j+1]=k;
        }
    }    
  }
}

void selection_sort(int vet[], int t)
{
    int i, j, min, aux;
    
    for (i = 0; i < (t-1); i++)
    {
         min = i;
         for (j = (i+1); j < t; j++)
         {
           if(vet[j] < vet[min])
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
    	int x[10]={10,18,14,5,29,32,20,16,9,10};
	int i, opcao = 0, contador = 0;

	printf("Selecione ssort(1) ou bsort(2): \n");
	scanf("%d", &opcao);

	switch(opcao) 
	{	
	
	case 1: selection_sort(x, 10);
		break;
	case 2: bsort(x, 10);
		break;
	}
    	
    	printf("\n\nVetor ordenado:\n");
    	for (i=0; i<10; i++)
        	printf("%d\n", x[i]);

    	return 0;
}
