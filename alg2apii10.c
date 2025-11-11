#include <stdio.h>

double qual_maior(double valor1, double valor2);

int main()
{
    double num1, num2;
    printf("Digite dois numeros: ");
    scanf("%lf %lf",&num1,&num2);
    printf("\nMaior: %lf", qual_maior(num1,num2));
}

double qual_maior(double valor1, double valor2)
{
    if(valor1 > valor2)
    {
        return valor1;
    }
    else
    {
        return valor2;
    }
}