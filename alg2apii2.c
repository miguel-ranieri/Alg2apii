#include <stdio.h>

void  imprime_data(int dia, int mes, int ano);

int main ()
{
    int dia, mes, ano;
    printf("Digite a data no formato DD MM AAAA: ");
    scanf("%d",&dia);
    scanf("%d",&mes);
    scanf("%d", &ano);
    imprime_data(dia, mes, ano);
}

void imprime_data(int dia, int mes, int ano)
{
    char meses[12][20] = {"Janeiro", "Fevereiro", "Marco", "Abril", "Maio", "Junho", "Julho", "Agosto", "Setembro", "Outubro",
         "Novembro", "Dezembro;"};
    printf("\n %d de %s de %d", dia, meses[mes-1], ano);
    return;
}