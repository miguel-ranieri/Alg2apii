#include <stdio.h>

int conversor_p_segundos(int horas, int minutos, int segundos);

int main()
{
    int horas, minutos, segundos;
    printf("Digite o tempo: ");
    scanf("%d %d %d",&horas, &minutos, &segundos);
    printf("\nTempo em segundos: %d segundos",conversor_p_segundos(horas, minutos, segundos));
}

int conversor_p_segundos(int horas, int minutos, int segundos)
{
    return (horas* 60 * 60) + (minutos * 60) + segundos;
}