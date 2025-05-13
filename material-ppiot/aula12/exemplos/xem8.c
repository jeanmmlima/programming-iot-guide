#include <stdio.h>

// Função void que analisa um número e imprime o resultado
void verificarNumero(int numero) {
    if (numero > 0) {
        printf("O número é positivo.\n");
    } else if (numero < 0) {
        printf("O número é negativo.\n");
    } else {
        printf("O número é zero.\n");
    }
}

int main() {
    int valor = -7;
    
    verificarNumero(valor);  // chama a função

    return 0;
}