

#include <stdio.h>
#include <math.h>

int main()
{
    int numero;
    float raiz_quadrada, quadrado;

    printf("Digite um numero inteiro: ");
    scanf("%d", &numero);

    raiz_quadrada = sqrt(numero);
    quadrado = pow(numero, 2);

    printf("A raiz quadrada de %d eh %.2f\n", numero, raiz_quadrada);
    printf("%d elevado ao quadrado eh %.2f", numero, quadrado);

    return 0;
}
