#include <stdio.h>

void imprimir_igual(int valor);

int main()
{
    int num;
    printf("Digite o numero de 'iguais' a serem imprimidos: ");
    scanf("%d",&num);
    printf("\n");
    imprimir_igual(num);
    return 0;
}

void imprimir_igual(int valor)
{
    for(int i = 1; i <= valor; i++)
    {
        printf("=");
    }
    return;
}