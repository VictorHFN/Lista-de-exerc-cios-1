#include <stdio.h>

int main()
{
    float base_maior, base_menor, altura, area;

    printf("Digite a base maior do trapezio: ");
    scanf("%f", &base_maior);

    printf("Digite a base menor do trapezio: ");
    scanf("%f", &base_menor);

    printf("Digite a altura do trapezio: ");
    scanf("%f", &altura);

    area = (base_maior + base_menor) * altura / 2;

    printf("A area do trapezio de bases %.2f e %.2f e altura %.2f eh %.2f", base_maior, base_menor, altura, area);

    return 0;
}
