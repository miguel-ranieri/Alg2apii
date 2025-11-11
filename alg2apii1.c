#include <stdio.h>
#include <stdlib.h>

int dobro(int valor);

int main()
{
  int numero;
  printf("Digite um numero: ");
  scanf("%d",&numero);
  printf("\nResultado: %d",dobro(numero));
  return 0;
}

int dobro(int valor)
{
  return valor * 2;
}