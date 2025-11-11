#include <stdio.h>

double calculadora_simples(double valor1, char simbolo, double valor2);

int main()
{
    double num1, num2;
    char simbolo;
    printf("\nDigite dois valores e o sinal para realizar a operacao (Ex.: 2 * 4): ");
    scanf("%lf %c %lf",&num1, &simbolo, &num2);
    double resultado = calculadora_simples(num1, simbolo, num2);

    if(resultado == -9999999)
    {
        printf("\nSimbolo invalido");
    }
    else
    {
        printf("\nResultado: %lf", resultado);
    }

    return 0;
}

double calculadora_simples(double valor1, char simbolo, double valor2)
{
    if(simbolo == '+')
    {
        return valor1 + valor2;
    }
    else if(simbolo == '-')
    {
        return valor1 - valor2;
    }
    else if(simbolo == '*')
    {
        return valor1 * valor2;
    }
    else if(simbolo == '/')
    {
        if(valor2 == 0)
        {
            return 0;
        }
        else
        {
            return valor1 / valor2;
        }
    }
    else
    {
        return -9999999;
    }
}