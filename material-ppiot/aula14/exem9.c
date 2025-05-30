#include <stdio.h>
#include <stdlib.h>

int main() {
    char *mensagem;

    // Aloca espaço para 50 caracteres
    mensagem = (char*) malloc(50 * sizeof(char));

    if (mensagem == NULL) {
        printf("Erro ao alocar memória para a string.\n");
        return 1;
    }

    printf("Digite uma mensagem (máx 49 caracteres): ");
    fgets(mensagem, 50, stdin);

    printf("Você digitou: %s", mensagem);

    free(mensagem); // Liberação de memória
    return 0;
}