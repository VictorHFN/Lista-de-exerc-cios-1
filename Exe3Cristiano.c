// Faça um programa que receba dois números, calcule e imprima um elevado ao outro (x=pow(base,exp), precisa da biblioteca math.h).

#include <stdio.h>
#include <math.h>

int main()
{
    float base, exp, resultado;

    printf("Digite a base: ");
    scanf("%f", &base);

    printf("Digite o expoente: ");
    scanf("%f", &exp);

    resultado = pow(base, exp);

    printf("%.2f elevado a %.2f é igual a %.2f", base, exp, resultado);

    return 0;
}