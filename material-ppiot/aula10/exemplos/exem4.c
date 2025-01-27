#include <stdio.h>

int main() {
    char origem[] = "Copiar";  // String de origem
    char destino[20];          // String de destino com espaço suficiente

    // Laço para copiar os caracteres da string origem para destino
    for (int i = 0; origem[i] != '\0'; i++) {
        destino[i] = origem[i];  // Copia cada caractere
        destino[i + 1] = '\0';   // Garante o término correto da string
    }

    printf("String original: %s\n", origem);
    printf("String copiada: %s\n", destino);

    return 0;
}