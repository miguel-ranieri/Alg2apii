#include <stdio.h>

double volume_cilindro(double altura, double raio);

int main()
{
    double r, alt;
    printf("Digite o valor da altura e do raio do cilindro: ");
    scanf("%lf %lf",&alt,&r);
    printf("\nVolume do cilindro: %lf",volume_cilindro(alt, r));
}

double volume_cilindro(double altura, double raio)
{
    double pi = 3.141592;
    return pi * raio * raio * altura;
}