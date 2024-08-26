#include <stdio.h>

int main() {
    float nota1, nota2, nota3, nota4, media;

    // Solicita as quatro notas ao usuário
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    printf("Digite a quarta nota: ");
    scanf("%f", &nota4);

    // Calcula a média das quatro notas
    media = (nota1 + nota2 + nota3 + nota4) / 4;

    // Verifica se o aluno está aprovado ou reprovado
    if (media >= 7.0) {
        printf("Aluno aprovado com média %.2f\n", media);
    } else {
        printf("Aluno reprovado com média %.2f\n", media);
    }

    return 0;
}