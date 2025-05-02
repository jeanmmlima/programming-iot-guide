#include <stdio.h>
#include <string.h>

#define MAX_TAREFAS 5

// Enum de prioridade
enum Prioridade {
    BAIXA,
    MEDIA,
    ALTA
};

// Enum de status
enum Status {
    PENDENTE,
    EM_PROGRESSO,
    CONCLUIDA
};

// Struct da tarefa
struct Tarefa {
    char descricao[100];
    enum Prioridade prioridade;
    enum Status status;
};

// Função para imprimir uma tarefa
void imprimirTarefa(struct Tarefa t) {
    printf("Descrição: %s", t.descricao);

    printf("Prioridade: ");
    switch (t.prioridade) {
        case BAIXA: printf("Baixa\n"); break;
        case MEDIA: printf("Média\n"); break;
        case ALTA:  printf("Alta\n"); break;
    }

    printf("Status: ");
    switch (t.status) {
        case PENDENTE:      printf("Pendente\n"); break;
        case EM_PROGRESSO:  printf("Em Progresso\n"); break;
        case CONCLUIDA:     printf("Concluída\n"); break;
    }

    printf("-------------------------\n");
}

int main() {
    struct Tarefa tarefas[MAX_TAREFAS];

    for (int i = 0; i < MAX_TAREFAS; i++) {
        printf("\n--- Tarefa %d ---\n", i + 1);
        getchar(); // limpar buffer

        printf("Digite a descrição: ");
        fgets(tarefas[i].descricao, 100, stdin);

        int p, s;

        printf("Prioridade (0 = Baixa, 1 = Média, 2 = Alta): ");
        scanf("%d", &p);
        tarefas[i].prioridade = (enum Prioridade)p;

        printf("Status (0 = Pendente, 1 = Em Progresso, 2 = Concluída): ");
        scanf("%d", &s);
        tarefas[i].status = (enum Status)s;
    }

    printf("\n=== LISTA DE TAREFAS ===\n");
    for (int i = 0; i < MAX_TAREFAS; i++) {
        imprimirTarefa(tarefas[i]);
    }

    printf("\n=== TAREFAS PENDENTES COM PRIORIDADE ALTA ===\n");
    for (int i = 0; i < MAX_TAREFAS; i++) {
        if (tarefas[i].prioridade == ALTA && tarefas[i].status == PENDENTE) {
            imprimirTarefa(tarefas[i]);
        }
    }

    return 0;
}