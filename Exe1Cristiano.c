// Faça um programa que receba o valor de um depósito e o valor da taxa de juros. Calcule e imprima o valor do rendimento e o valor total depois do rendimento.

#include <stdio.h>

int main()
{
    float deposito, txjuros, rendimento, vtotal;

    printf("Digite o valor do deposito: ");
    scanf("%f", &deposito);

    printf("Digite a taxa de juros: ");
    scanf("%f", &txjuros);

    rendimento = deposito * (txjuros / 100);
    vtotal = deposito + rendimento;

    printf("O valor do rendimento é: R$%.2f\n", rendimento);
    printf("O valor total é: R$%.2f\n", vtotal);

    return 0;
}