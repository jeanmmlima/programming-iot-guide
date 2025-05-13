#include <stdio.h>

// Função para calcular o ano de nascimento
int calcularAnoNascimento(int idade, int anoAtual) {
    return anoAtual - idade;
}

int main() {
    int idade, anoAtual;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    int anoNascimento = calcularAnoNascimento(idade, anoAtual);

    printf("Você nasceu em %d.\n", anoNascimento);

    return 0;
}