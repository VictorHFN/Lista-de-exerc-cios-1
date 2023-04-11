#include <stdio.h>

int main()
{
    float salario, imposto;

    printf("Digite o salario do funcionario: ");
    scanf("%f", &salario);

    imposto = salario * 0.05;

    printf("O valor do imposto de renda a ser pago pelo funcionario eh R$ %.2f", imposto);

    return 0;
}
