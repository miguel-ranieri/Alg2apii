#include <stdio.h>
#include <stdbool.h>

int quant_primos_antes(int valor);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(num <= 0)
    {
        printf("\nEntrada invalida");
    }
    printf("\nQuantidade de numeros primos antes de %d: %d", num, quant_primos_antes(num));
}

int quant_primos_antes(int valor)
{
    int cont = 0;

    for(int i = 2; i < valor; i++)
    {
        int primo = 1;

        for(int j = 2; j * j <= i; j++)
        {
            if(i % j == 0)
            {
                primo = 0;
                break;
            }
        }

        cont += primo;
    }

    return cont;
}