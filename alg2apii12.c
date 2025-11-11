#include <stdio.h>

int soma_algarismos(int valor);

int main()
{
    int num;
    printf("Digite um numero inteiro maio que 0: ");
    scanf("%d",&num);
    if(num <= 0)
    {
        printf("Numero invalido");
        return 0;
    }
    printf("\nSoma dos algarismos: %d",soma_algarismos(num));
}

int soma_algarismos(int valor)
{
    int soma = 0;

    while(valor > 0)
    {
        soma += valor % 10; 
        valor /= 10;        
    }

    return soma;
}