#include <stdio.h>

// Função que retorna um caractere com base na nota
char obterConceito(int nota) {
    if (nota >= 90) {
        return 'A';
    } else if (nota >= 80) {
        return 'B';
    } else if (nota >= 70) {
        return 'C';
    } else if (nota >= 60) {
        return 'D';
    } else {
        return 'F';
    }
}

int main() {
    int nota;
    printf("Digite a nota do aluno (0 a 100): ");
    scanf("%d", &nota);

    char conceito = obterConceito(nota);
    printf("Conceito do aluno: %c\n", conceito);

    return 0;
}