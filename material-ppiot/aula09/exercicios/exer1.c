#include <stdio.h>

int main() {
    float medias[5];   // Vetor para armazenar as médias de cada aluno
    int i, j;
    int contador = 0;  // Contador para alunos com média >= 7.0

    // Leitura das notas e cálculo da média de cada aluno
    for (i = 0; i < 5; i++) {
        float soma = 0.0;
        printf("Digite as 4 notas do aluno %d:\n", i + 1);
        for (j = 0; j < 4; j++) {
            float nota;
            printf("Nota %d: ", j + 1);
            scanf("%f", &nota);
            soma += nota;  // Soma as notas
        }
        medias[i] = soma / 4;  // Calcula a média do aluno
        if (medias[i] >= 7.0) {
            contador++;  // Incrementa o contador se a média for >= 7.0
        }
    }

    // Exibe as médias de cada aluno
    printf("\nMédias dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("Aluno %d - Média: %.2f\n", i + 1, medias[i]);
    }

    // Exibe o número de alunos com média >= 7.0
    printf("\nNúmero de alunos com média maior ou igual a 7.0: %d\n", contador);

    return 0;
}