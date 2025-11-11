#include <stdio.h>

int fatorial(int num);

int main()
{
    int num;
    printf("Digite um inteiro positivo: ");
    scanf("%d",&num);
    if(num <= 0)
    {
        printf("\nEntrada invalida");
    }
    printf("\nResultado: %d",fatorial(num));
    return 0;
}

int fatorial(int num)
{
    int resultado = 1;
    for(int i = 1; i <= num; i++)
    {
        resultado *= i;
    }
    return resultado;
}