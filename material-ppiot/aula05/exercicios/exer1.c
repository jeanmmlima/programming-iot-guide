#include <stdio.h>
#include <math.h>

int main() {
    float raio, area;
    const float PI = 3.14159;

    // Solicita ao usuário que insira o valor do raio
    printf("Digite o valor do raio da circunferência: ");
    scanf("%f", &raio);

    // Calcula a área da circunferência
    area = PI * pow(raio, 2);

    // Exibe o resultado
    printf("A área da circunferência é: %.2f\n", area);

    return 0;
}