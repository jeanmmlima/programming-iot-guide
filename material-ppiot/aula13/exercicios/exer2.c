#include <stdio.h>

#define MAX_ALUNOS 50

struct Aluno {
    char nome[50];
    int matricula;
    float nota1;
    float nota2;
};

int main() {
    struct Aluno turma[MAX_ALUNOS];
    int qtdAlunos;
    int i;
    float somaMedias = 0;

    printf("Quantos alunos deseja cadastrar? (máximo %d): ", MAX_ALUNOS);
    scanf("%d", &qtdAlunos);

    if (qtdAlunos < 1 || qtdAlunos > MAX_ALUNOS) {
        printf("Quantidade inválida.\n");
        return 1;
    }

    for (i = 0; i < qtdAlunos; i++) {
        getchar(); // limpar o buffer do teclado
        printf("\n--- Aluno %d ---\n", i + 1);
        printf("Nome: ");
        fgets(turma[i].nome, 50, stdin);

        printf("Matrícula: ");
        scanf("%d", &turma[i].matricula);

        printf("Nota 1: ");
        scanf("%f", &turma[i].nota1);

        printf("Nota 2: ");
        scanf("%f", &turma[i].nota2);
    }

    printf("\n=== RELATÓRIO DA TURMA ===\n");

    for (i = 0; i < qtdAlunos; i++) {
        float media = (turma[i].nota1 + turma[i].nota2) / 2;
        somaMedias += media;

        printf("\nAluno: %s", turma[i].nome);
        printf("Matrícula: %d\n", turma[i].matricula);
        printf("Notas: %.2f, %.2f\n", turma[i].nota1, turma[i].nota2);
        printf("Média: %.2f\n", media);
    }

    float mediaGeral = somaMedias / qtdAlunos;
    printf("\nMÉDIA GERAL DA TURMA: %.2f\n", mediaGeral);

    return 0;
}