#include <stdio.h>
#include <math.h>

//Faça uma função e um programa de teste para o cálculo do volume de uma esfera.
//Sendo que o raio é passado por parâmetro.

double volume_esfera(double raio);

int main()
{
    double r;
    printf("Digite o valor do raio: ");
    scanf("%lf",&r);
    double volume = volume_esfera(r);
    if(volume == -1)
    {
        printf("Entrada invalida, numero negativo");
    }
    else
    {
        printf("\nVolume da esfera: %lf", volume);
    }
}

double volume_esfera(double raio)
{
    if(raio < 0)
    {
        return -1;
    }
    else if(raio == 0)
    {
        return 0;
    }
    else
    {
        double pi = atan(1) * 4;
        return (4.0 * pow(raio,3) * pi)/3.0;
    }
}