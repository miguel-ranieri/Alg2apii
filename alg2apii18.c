#include <stdio.h>

double potenciacao(int base, int expoente);

int main()
{
    int num1, num2;
    printf("Digite o valor da base e o do expoente: ");
    scanf("%d %d",&num1,&num2);
    printf("\nResultado: %.4lf",potenciacao(num1,num2));
    return 0;
}

double potenciacao(int base, int expoente)
{
    if(expoente > 0)
    {
        double resultado = 1;
        for(int i = 0; i < expoente; i++)
        {
            resultado *= base;
        }
        return resultado;
    }
    else if( expoente == 0)
    {
        return 1;
    }
    else
    {
        int expoente_positivo = expoente * (-1);
        double resultado = 1;
        for(int i = 0; i < expoente_positivo; i++)
        {
            resultado *= base;
        }
        return 1.0 / resultado;
    }
}