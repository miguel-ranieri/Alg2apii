#include <stdio.h>

void imprimir_triangulo(int valor);

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
    imprimir_triangulo(num);
    return 0;
}

void imprimir_triangulo(int valor)
{
    for(int i = 1; i <= valor; i++)
    {
        for(int j = 1; j <= valor - i; j++)
        {
            printf(" ");
        }
        for(int j = 1; j <= 2*i - 1; j++)
        {
            printf("*");
        }
        printf("\n");
        
    }

}