#include <stdio.h>

int main() {
    int botao1, botao2, motor;

    // Solicita ao usuário para inserir o estado do botão 1
    printf("Pressione o botão 1 (1 para pressionado, 0 para não pressionado): ");
    scanf("%d", &botao1);

    // Solicita ao usuário para inserir o estado do botão 2
    printf("Pressione o botão 2 (1 para pressionado, 0 para não pressionado): ");
    scanf("%d", &botao2);

    // Usa o operador OR bit a bit para verificar se pelo menos um botão foi pressionado
    motor = botao1 | botao2;

    // Exibe o estado do motor (1 para ligado, 0 para desligado)
    printf("Estado do motor: %d\n", motor);

    return 0;
}
