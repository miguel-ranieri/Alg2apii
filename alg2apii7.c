#include <stdio.h>

float celsius_p_fahrenheit(float celsius);

int main()
{
    float C;
    printf("Digite a temperatura em celsius: ");
    scanf("%f",&C);
    printf("\nTemperatura em Fahrenheit: %.2f", celsius_p_fahrenheit(C));
}

float celsius_p_fahrenheit(float celsius)
{
    return celsius * (9.0/5.0) + 32.0;
}