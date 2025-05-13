#include <stdio.h>

struct Aluno {
    char nome[50];
    int idade;
    float notaFinal;
};

int main() {
    struct Aluno aluno;

    printf("Digite o nome do aluno: ");
    fgets(aluno.nome, 50, stdin);

    printf("Digite a idade do aluno: ");
    scanf("%d", &aluno.idade);

    printf("Digite a nota final do aluno: ");
    scanf("%f", &aluno.notaFinal);

    printf("\n=== DADOS DO ALUNO ===\n");
    printf("Nome: %s", aluno.nome);
    printf("Idade: %d anos\n", aluno.idade);
    printf("Nota Final: %.2f\n", aluno.notaFinal);

    return 0;
}