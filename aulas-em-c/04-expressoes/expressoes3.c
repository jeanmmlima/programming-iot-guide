#include <stdio.h>
#include <math.h>
int main() {
    double x = -9.5;
    double y = 2.0;
    double z = 10.0;
    // Usando abs() para valor absoluto
    double valorAbsoluto = fabs(x);
    // Usando sin() para seno
    double seno = sin(z);
    // Usando cos() para cosseno
    double cosseno = cos(z);
    // Usando sqrt() para raiz quadrada
    double raizQuadrada = sqrt(z);
    // Usando pow() para potência
    double potencia = pow(y, 3);  // y elevado a 3
    // Usando log() para logaritmo natural
    double logaritmoNatural = log(z);
    // Usando log10() para logaritmo na base 10
    double logaritmoBase10 = log10(z);

    // Imprimindo os resultados
    printf("Valor absoluto de %.2f: %.2f\n", x, valorAbsoluto);
    printf("Seno de %.2f: %.2f\n", z, seno);
    printf("Cosseno de %.2f: %.2f\n", z, cosseno);
    printf("Raiz quadrada de %.2f: %.2f\n", z, raizQuadrada);
    printf("Potência de %.2f elevado a 3: %.2f\n", y, potencia);
    printf("Logaritmo natural de %.2f: %.2f\n", z, logaritmoNatural);
    printf("Logaritmo na base 10 de %.2f: %.2f\n", z, logaritmoBase10);

    return 0;
}
