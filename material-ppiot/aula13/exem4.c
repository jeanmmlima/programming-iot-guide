#include <stdio.h>

enum Status { Inativo, Ativo, Suspenso };

int main() {
    enum Status estadoAtual; // Declara uma variável do tipo enum Status
    estadoAtual = Inativo;    // Inicializa com a constante Inativo

    if (estadoAtual == 0) {   // Verifica se o valor é igual a 0
        printf("O sistema está inativo.\n");
    } else if (estadoAtual == 1) {
        printf("O sistema está ativo.\n");
    } else if (estadoAtual == 2) {
        printf("O sistema está suspenso.\n");
    }

    return 0;
}