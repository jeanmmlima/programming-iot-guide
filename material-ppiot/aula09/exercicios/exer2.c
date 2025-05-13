#include <stdio.h>

int main() {
    float alturas[30];  // Vetor para armazenar as alturas dos alunos
    int idades[30];     // Vetor para armazenar as idades dos alunos
    float somaAlturas = 0.0;
    float mediaAltura;
    int i, contador = 0;

    // Entrada de dados: idades e alturas dos 30 alunos
    printf("Digite a idade e a altura de 30 alunos:\n");
    for (i = 0; i < 30; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Idade: ");
        scanf("%d", &idades[i]);
        printf("Altura (em metros): ");
        scanf("%f", &alturas[i]);

        // Soma das alturas para calcular a média posteriormente
        somaAlturas += alturas[i];
    }

    // Cálculo da média de altura
    mediaAltura = somaAlturas / 30;

    // Verificação dos alunos com mais de 13 anos e altura inferior à média
    for (i = 0; i < 30; i++) {
        if (idades[i] > 13 && alturas[i] < mediaAltura) {
            contador++;
        }
    }

    // Exibe os resultados
    printf("\nMédia de altura dos alunos: %.2f metros\n", mediaAltura);
    printf("Número de alunos com mais de 13 anos e altura inferior à média: %d\n", contador);

    return 0;
}