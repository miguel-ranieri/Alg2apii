#include <stdio.h>

void triangulo_lateral(int valor);

int main()
{
    int num;
    printf("Digite um inteiro positivo: ");
    scanf("%d",&num);
    if(num <= 0)
    {
        printf("\nEntrada invalida");
        return 0;
    }
    printf("\n");
    triangulo_lateral(num);
    return 0;
}

void triangulo_lateral(int valor)
{
    for(int i = 1; i <= valor; i++)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    for(int i = valor -1; i >= 1; i--)
    {
        for(int j = 1; j <= i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
}