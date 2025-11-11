#include <stdio.h>
#include <math.h>

int verific_qdrd_pft(int valor);

int main()
{
    int num;
    printf("Digite um numero: ");
    scanf("%d",&num);
    if(verific_qdrd_pft(num))
    {
        printf("\n%d eh um quadrado perfeito",num);
    }
    else
    {
        printf("\n%d nao eh um quadrado perfeito",num);
    }

}

int verific_qdrd_pft(int valor)
{
    if (valor < 0)
    {
        return 0;
    }
    int raiz = (int) sqrt(valor);
    return raiz * raiz == valor;
}