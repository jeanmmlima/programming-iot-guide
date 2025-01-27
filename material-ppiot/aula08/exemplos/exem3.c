#include <stdio.h>

int main() {
    int i;  // Declaração da variável de controle do loop
    int limite;  // Definimos um limite para o loop

    // Solicitando ao usuário que insira o valor inicial de i
    printf("Digite o valor inicial de i: ");
    scanf("%d", &i);

    // Solicitando ao usuário que insira o limite do loop
    printf("Digite o valor limite: ");
    scanf("%d", &limite);

    // Loop for com a omissão da inicialização
    for (; i < limite; i++) {
        printf("Valor de i: %d\n", i);
    }

    return 0;
}