
#include <stdio.h>

#define PI 3.14159

int main() {
    float raio, area;

    printf("Digite o raio do circulo: ");
    scanf("%f", &raio);

    area = PI * raio * raio;

    printf("A area do circulo de raio %.2f eh %.2f", raio, area);

    return 0;
}
