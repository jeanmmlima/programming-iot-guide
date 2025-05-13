#include <stdio.h>

int main() {
    int potencia = 0;
    int resultado = 1;  // 3^0 é 1

    // Laço do-while para calcular e exibir as potências de 3 até a 10ª
    do {
        printf("%d ", resultado);  // Imprime o resultado atual
        resultado *= 3;  // Calcula a próxima potência de 3
        potencia++;
    } while (potencia <= 10);  // Continua até a 10ª potência

    return 0;
}