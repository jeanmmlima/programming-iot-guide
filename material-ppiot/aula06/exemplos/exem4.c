#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;

    // Solicita ao aluno que insira suas três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média das notas
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica se o aluno foi aprovado ou reprovado
    //media maior igual a 7 OU nota3 maior que 9 o aluno sera aprovado
    if (media >= 7.0 || nota3 > 9) {
        printf("Aluno aprovado com media %.2f.\n", media);
    } else {
        printf("Aluno reprovado com media %.2f.\n", media);
    }

    return 0;
}