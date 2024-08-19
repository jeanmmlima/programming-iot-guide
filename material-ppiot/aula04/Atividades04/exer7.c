#include <stdio.h>

int main() {
    int botao1, botao2, botao3, alarme;

    // Solicita ao usuário para inserir o estado do botão 1
    printf("Pressione o botão 1 (1 para pressionado, 0 para não pressionado): ");
    scanf("%d", &botao1);

    // Solicita ao usuário para inserir o estado do botão 2
    printf("Pressione o botão 2 (1 para pressionado, 0 para não pressionado): ");
    scanf("%d", &botao2);

    // Solicita ao usuário para inserir o estado do botão 3
    printf("Pressione o botão 3 (1 para pressionado, 0 para não pressionado): ");
    scanf("%d", &botao3);

    // Usa o operador AND bit a bit para verificar se todos os botões foram pressionados
    alarme = botao1 & botao2 & botao3;

    // Exibe o estado do alarme (1 para acionado, 0 para não acionado)
    printf("Estado do alarme: %d\n", alarme);

    return 0;
}
