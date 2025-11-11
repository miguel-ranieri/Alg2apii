#include <stdio.h>

double media_3(double valor1, double valor2, double valor3, char tipo);

int main()
{
    double nota1, nota2, nota3;
    char opcao;
    printf("Digite as notas do aluno para calacular a media: ");
    scanf("%lf %lf %lf",&nota1,&nota2,&nota3);
    printf("\nSelecione o tipo de media a ser feito, digite 'A' para fazer a media aritmetica e 'P' para ponderada: " );
    scanf(" %c",&opcao);
    if(opcao != 'A' && opcao != 'P')
    {
        printf("\nOpcao de media invalida");
        return 0;
    }
    else
    {
        printf("Resultado da media escolhida: %.2lf",media_3(nota1,nota2,nota3,opcao));
    }
}

double media_3(double valor1, double valor2, double valor3, char tipo)
{
    if(tipo == 'A')
    {
        return (valor1 + valor2 + valor3) / 3.0;
    }
    else
    {
        return ((valor1 * 5) + (valor2 * 3) + (valor3 * 2)) / 10.0;
    }
}