#include <stdio.h>
#include <math.h>

int main() {
    double x1, y1, x2, y2, distancia;

    // Solicita ao usuário as coordenadas do primeiro ponto
    printf("Digite as coordenadas do primeiro ponto (x1 y1): ");
    scanf("%lf %lf", &x1, &y1);

    // Solicita ao usuário as coordenadas do segundo ponto
    printf("Digite as coordenadas do segundo ponto (x2 y2): ");
    scanf("%lf %lf", &x2, &y2);

    // Calcula a distância entre os dois pontos
    distancia = sqrt(pow(x2 - x1, 2) + pow(y2 - y1, 2));

    // Exibe o resultado
    printf("A distância entre os pontos (%.2f, %.2f) e (%.2f, %.2f) é: %.2f\n", x1, y1, x2, y2, distancia);

    return 0;
}
