#include <stdio.h>

int main() {
    float notas[100];  // Vetor para armazenar as notas (limite arbitrário de 100 valores)
    int total = 0;     // Total de valores lidos
    float soma = 0.0;  // Soma das notas
    float media;
    int acimaMedia = 0; // Quantidade de valores acima da média
    int abaixoSete = 0; // Quantidade de valores abaixo de 7

    printf("Digite as notas (-1 para encerrar):\n");

    // Entrada de valores
    while (1) {
        float nota;
        printf("Nota %d: ", total + 1);
        scanf("%f", &nota);

        if (nota == -1) {  // Encerrar a entrada ao digitar -1
            break;
        }

        notas[total] = nota;  // Armazena a nota no vetor
        soma += nota;         // Acumula a soma das notas
        total++;              // Incrementa o total de valores lidos

        if (total >= 100) {   // Limita o número de entradas a 100
            printf("Limite de 100 valores atingido.\n");
            break;
        }
    }

    // Calcula a média
    if (total > 0) {
        media = soma / total;
    } else {
        printf("Nenhuma nota válida foi inserida.\n");
        return 0;
    }

    // Exibição dos resultados
    printf("\nTotal de valores lidos: %d\n", total);

    // Mostra os valores na ordem em que foram informados
    printf("Valores na ordem informada:\n");
    for (int i = 0; i < total; i++) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    // Mostra os valores na ordem inversa ao informado
    printf("Valores na ordem inversa:\n");
    for (int i = total - 1; i >= 0; i--) {
        printf("%.2f ", notas[i]);
    }
    printf("\n");

    // Soma e média
    printf("Soma dos valores: %.2f\n", soma);
    printf("Média dos valores: %.2f\n", media);

    // Contagem de valores acima da média e abaixo de 7
    for (int i = 0; i < total; i++) {
        if (notas[i] > media) {
            acimaMedia++;
        }
        if (notas[i] < 7) {
            abaixoSete++;
        }
    }

    printf("Quantidade de valores acima da média: %d\n", acimaMedia);
    printf("Quantidade de valores abaixo de 7: %d\n", abaixoSete);

    return 0;
}