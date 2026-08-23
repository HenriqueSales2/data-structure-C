#include <stdio.h>

int main()
{
    int a = 0, b = 0, i = 0;

    printf("Escreva a contagem A inicial: ");
    scanf("%d", &a);

    printf("Escreva a contagem B final: ");
    scanf("%d", &b);

    printf("\nValores entre %d e %d:\n", a, b);
    
    printf("[ ");

    if (a <= b)
    {
        for (i = a; i <= b; i++)
        {
            if (i < b)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d", i);
            }
        }
    }

    if (a > b)
    {
        for (i = a; i >= b; i--)
        {
            if (i < b)
            {
                printf("%d, ", i);
            }
            else
            {
                printf("%d", i);
            }
        }
    }
    
    printf(" ]");

    printf("\n");

    return 0;
}
