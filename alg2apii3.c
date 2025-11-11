#include <stdio.h>

int verificacao_positividade(float valor);

int main()
{
    float num;
    printf("Digite um numero: ");
    scanf("%f",&num);
    printf("\n%d", verificacao_positividade(num));
}

int verificacao_positividade(float valor)
{
    if(valor > 0)
    {
        return 1;
    }
    else if(valor < 0)
    {
        return -1;
    }
    else
    {
        return 0;
    }
}