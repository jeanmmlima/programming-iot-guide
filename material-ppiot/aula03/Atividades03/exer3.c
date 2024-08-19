#include <stdio.h>

#define PI 3.14159

int main() {
    const int MAX_VALUE = 100;

    printf("Valor da constante PI (definida com #define): %.5f\n", PI);
    printf("Valor da constante MAX_VALUE (definida com const): %d\n", MAX_VALUE);

    // Tentativa de alteração das constantes (comentadas para evitar erro de compilação)
    // PI = 3.14; // Isso causará um erro de compilação
    // MAX_VALUE = 200; // Isso causará um erro de compilação

    return 0;
}
