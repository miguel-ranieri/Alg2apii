#include <stdio.h>

float verify_triangulo(float valor1, float valor2, float valor3);
void qual_triangulo(float valor1, float valor2, float valor3);

int main()
{
    float lado1, lado2, lado3;
    printf("Digite as medidas dos lados do triangulo: ");
    scanf("%f %f %f",&lado1,&lado2,&lado3);
    if(lado1 <= 0 || lado2 <= 0 || lado3 <= 0 )
    {
        printf("\nMedida invalida");
    }
    else if(verify_triangulo(lado1, lado2, lado3) == -1)
{
    printf("\nNao forma triangulo");
}
    else
    {
        qual_triangulo(lado1, lado2, lado3);
    }
    return 0;
}

float verify_triangulo( float valor1, float valor2, float valor3)
{
    float soma1 = valor2 + valor3;
    float soma2 = valor1 + valor3;
    float soma3 = valor1 + valor2;
    if(valor1 >= soma1 || valor2 >= soma2 || valor3 >= soma3)
    {
        return -1;
    }
    else
    {
        return 1;
    }
}

void qual_triangulo(float valor1, float valor2, float valor3)
{
    if(valor1 == valor2 && valor2 == valor3)
    {
        printf("\nEh um triangulo equilatero");
        
    }
    else if(valor1 != valor2 && valor2 != valor3 && valor1 != valor3)
    {
        printf("\nEh um triangulo escaleno");
       
    }
    else 
    {
        printf("\nEh um triangulo isosceles");
       
    }
}