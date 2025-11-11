#include <stdio.h>
#include <math.h>

double hipotenusa(double cateto1, double cateto2);

int main()
{
    double a, b;
    printf("Digite os valores dos catetos: ");
    scanf("%lf %lf",&a, &b);
    double h = hipotenusa(a, b); 

    if(h == -1)
    {
        printf("\nEntrada invalida, numero negativo");
    }
    else
    {
        printf("\nHipotenusa: %.2lf", h);
    }
}

double hipotenusa(double cateto1, double cateto2)
{
    if(cateto1 < 0 || cateto2 < 0)
    {
        return -1;
    }
    else
    {
        return sqrt(pow(cateto1,2) + pow(cateto2,2));
    }
}