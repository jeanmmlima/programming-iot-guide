#include <stdio.h>

// Enumeração para os itens do cardápio
enum TipoComida {
    PIZZA = 1,
    HAMBURGUER,
    SALADA,
    MASSA,
    SUSHI
};

// Função para exibir o nome do prato
void mostrarComida(enum TipoComida comida) {
    switch (comida) {
        case PIZZA:
            printf("Você escolheu Pizza!\n");
            break;
        case HAMBURGUER:
            printf("Você escolheu Hambúrguer!\n");
            break;
        case SALADA:
            printf("Você escolheu Salada!\n");
            break;
        case MASSA:
            printf("Você escolheu Massa!\n");
            break;
        case SUSHI:
            printf("Você escolheu Sushi!\n");
            break;
        default:
            printf("Opção inválida.\n");
    }
}

int main() {
    int escolha;

    printf("=== CARDÁPIO ===\n");
    printf("1 - Pizza\n");
    printf("2 - Hambúrguer\n");
    printf("3 - Salada\n");
    printf("4 - Massa\n");
    printf("5 - Sushi\n");
    printf("Escolha seu prato (1-5): ");
    scanf("%d", &escolha);

    mostrarComida((enum TipoComida)escolha);

    return 0;
}