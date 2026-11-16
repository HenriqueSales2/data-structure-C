#include <stdio.h>

void selection_sort(int vet[], int t)
{
    int i, j, min, aux;
    
    for (i = 0; i < (t-1); i++)
    {
         min = i;
         for (j = (i+1); j < t; j++)
         {
           if(vet[j] > vet[min])
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
    int X[10]={10,18,14,5,29,32,20,16,9,10};
    int i;
    
    selection_sort(X, 10);
    
    printf("\n\nVetor ordenado:\n");
    for (i=0; i<10; i++)
        printf("%d\n", X[i]);
   
    return 0;
}
