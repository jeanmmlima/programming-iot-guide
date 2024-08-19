#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    int resultado;

    // Solicita ao usuário que insira as três notas
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);

    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);

    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);

    // Calcula a média das três notas
    media = (nota1 + nota2 + nota3) / 3;

    // Verifica se o aluno está aprovado
    resultado = media >= 7 || nota3 > 9;
    printf("Resultado: 1 - Aluno aprovado! 0 - Aluno reprovado\n");
    printf("%i \n",resultado);

    return 0;
}