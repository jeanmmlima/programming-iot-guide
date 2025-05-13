#include <stdio.h>

int main() {
    float temperatura, tensaoBomba;
    int umidade;  // 1 - baixa, 2 - media, 3 - alta

    // Solicita ao usuário a temperatura e a umidade do solo
    printf("Digite a temperatura atual (em graus Celsius): ");
    scanf("%f", &temperatura);

    printf("Digite o nível de umidade do solo (1 - baixa, 2 - media, 3 - alta): ");
    scanf("%d", &umidade);

    // Determina a tensão da bomba com base na temperatura e umidade
    if (temperatura > 30) {
        tensaoBomba = 12.0;  // 100% da capacidade
    } else if (temperatura >= 20 && temperatura <= 29) {
        if (umidade == 1 || umidade == 2) {
            tensaoBomba = 9.6;  // 80% da capacidade
        } else if (umidade == 3) {
            tensaoBomba = 7.2;  // 60% da capacidade
        }
    } else if (temperatura >= 10 && temperatura <= 19) {
        if (umidade == 3) {
            tensaoBomba = 3.6;  // 30% da capacidade
        } else {
            tensaoBomba = 6.0;  // 50% da capacidade
        }
    } else if (temperatura < 10) {
        tensaoBomba = 1.8;  // 15% da capacidade
    }

    // Exibe a tensão da bomba
    printf("A tensão da bomba de irrigação deve ser: %.1fV\n", tensaoBomba);

    return 0;
}