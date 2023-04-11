/*
Faça um programa que receba um número real, calcule e imprima:

a parte inteira do número;

a parte fracionária do número;

arredondamento do número.
*/

#include <stdio.h>
// #include <math.h>

int main()
{
    float num;
    short parte_inteira, arredondado;
    float parte_fracionaria;

    printf("Digite um número real: ");
    scanf("%f", &num);

    parte_inteira = (short)num;
    parte_fracionaria = num - parte_inteira;
    arredondado = round(num);

    printf("Parte inteira: %d\n", parte_inteira);
    printf("Parte fracionária: %f\n", parte_fracionaria);
    printf("Arredondamento: %d\n", arredondado);

    return 0;
}