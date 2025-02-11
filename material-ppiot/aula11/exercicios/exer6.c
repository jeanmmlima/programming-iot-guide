#include <stdio.h>

int main() {
    float notas[5][4]; // Matriz para armazenar as 4 notas de 5 alunos
    float medias[5];   // Vetor para armazenar as médias dos alunos

    // Entrada das notas
    printf("Digite as 4 notas de cada um dos 5 alunos:\n");
    for (int i = 0; i < 5; i++) {
        float soma = 0;
        printf("\nAluno %d:\n", i + 1);
        for (int j = 0; j < 4; j++) {
            printf("Nota %d: ", j + 1);
            scanf("%f", &notas[i][j]);
            soma += notas[i][j]; // Soma as notas para calcular a média
        }
        medias[i] = soma / 4.0; // Calcula a média do aluno
    }

    // Exibindo os alunos com média >= 6
    printf("\nAlunos com média >= 6.0:\n");
    int encontrou = 0;
    for (int i = 0; i < 5; i++) {
        if (medias[i] >= 6.0) {
            printf("Aluno %d - Média: %.2f\n", i + 1, medias[i]);
            encontrou = 1;
        }
    }

    // Caso nenhum aluno tenha média >= 6
    if (!encontrou) {
        printf("Nenhum aluno obteve média suficiente.\n");
    }

    return 0;
}