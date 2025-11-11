#include <stdio.h>

double consumo_kml(double valor1, double valor2);

int main()
{
    float dist, litros;
    printf("\nDigite a distancia e a quantidade de litros consumidos: ");
    scanf("%f %f",&dist,&litros);
    consumo_kml(dist, litros);
}

double consumo_kml(double valor1, double valor2)
{
    double consumo = valor1 / valor2;
    if(consumo < 8)
    {
        printf("\nVenda o carro!");
        return 0;
    }
    else if( consumo >= 8 && consumo < 14)
    {
        printf("\nEconomico!");
        return 0;
    }
    else
    {
        printf("\nSuper economico!");
        return 0;
    }
}