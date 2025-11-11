#include <stdio.h>

int soma_intervalo(int valor1, int valor2);

int main()
{
    int num1, num2;
    printf("Digite dois inteiros postivos: ");
    scanf("%d %d",&num1,&num2);
    if(num1 <= 0 || num2 <= 0)
    {
        printf("\nEntrada invalida");
    }
    else
    {
        printf("\nResultado: %d",soma_intervalo(num1,num2));
    }
}

int soma_intervalo(int valor1, int valor2)
{
    int soma = 0;
    int menor = (valor1 < valor2) ? valor1 : valor2;
    int maior = (valor1 > valor2) ? valor1 : valor2;

    for(int i = menor + 1; i < maior; i++)
    {
        soma += i;
    }
    return soma;
}