#include <stdio.h>

// Função que recebe um ponteiro e dobra o valor apontado
void dobrarValor(int *numero) {
    *numero = *numero * 2;
}

int main() {
    int valor;

    // Leitura do valor
    printf("Digite um número inteiro: ");
    scanf("%d", &valor);

    // Chamada da função passando o endereço da variável
    dobrarValor(&valor);

    // Impressão do novo valor
    printf("O valor dobrado é: %d\n", valor);

    return 0;
}