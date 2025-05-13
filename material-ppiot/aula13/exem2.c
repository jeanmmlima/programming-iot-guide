#include <stdio.h>
#include <string.h>

// Definindo a estrutura
struct Aluno {
    char nome[50];
    int matricula;
    float nota;
};

int main() {
    struct Aluno aluno;

    // Lendo os dados com fgets
    printf("Digite o nome do aluno: ");
    fgets(aluno.nome,sizeof(aluno.nome),stdin); // Lê string 

    // Remove o \n que fgets adiciona
    size_t len = strlen(aluno.nome);
    if (len > 0 && aluno.nome[len - 1] == '\n') {
        aluno.nome[len - 1] = '\0';
    }

    printf("Digite o número de matrícula: ");
    scanf("%d", &aluno.matricula);

    printf("Digite a nota final: ");
    scanf("%f", &aluno.nota);

    // Exibindo os dados
    printf("\n--- Dados do Aluno ---\n");
    printf("Nome: %s\n", aluno.nome);
    printf("Matrícula: %d\n", aluno.matricula);
    printf("Nota: %.2f\n", aluno.nota);

    return 0;
}