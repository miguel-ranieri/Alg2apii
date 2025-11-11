#include <stdio.h>

void imprimir_exclamacao(int valor);

int main()
{
    int num;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d",&num);
    if(num <= 0)
    {
        printf("\nEntrada invalida");
        return 0;
    }
    printf("\n");
    imprimir_exclamacao(num);
    return 0;
}

void imprimir_exclamacao(int valor)
{
    for(int i = 1; i <= valor; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("!");
        }
        printf("\n");
    }
}