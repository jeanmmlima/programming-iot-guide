#include <stdio.h>

int main() {
    int umidade;              // Variável para armazenar a umidade do solo
    int nivelMinimoUmidade = 40;  // Definimos o nível mínimo de umidade em 40%
    int irrigacaoAtivada = 0;  // Variável para indicar se a irrigação foi ativada

    // Simulando leituras de umidade do solo em um ciclo de 5 leituras
    int contador = 0;
    while (contador < 5) {
        // Simulando a leitura da umidade do solo (valor fixo para este exemplo)
        // Em um caso real, esse valor seria lido de um sensor de umidade
        printf("Digite o valor da umidade do solo (0 a 100): ");
        scanf("%d", &umidade);  // Lê o valor da umidade inserido pelo usuário

        // Verifica se a umidade está abaixo do nível mínimo
        if (umidade < nivelMinimoUmidade) {
            // Ativa a irrigação se a umidade estiver muito baixa
            printf("Umidade baixa! Ativando irrigação...\n");
            irrigacaoAtivada = 1;  // Define que a irrigação foi ativada
        } else {
            // Se a umidade estiver normal, não ativa a irrigação
            printf("Umidade suficiente. Irrigação desativada.\n");
            irrigacaoAtivada = 0;  // Define que a irrigação está desativada
        }

        // Incrementa o contador para simular múltiplas leituras
        contador++;
    }

    // Mensagem final após as leituras
    printf("Monitoramento de umidade concluído. Verifique os resultados.\n");

    return 0;
}