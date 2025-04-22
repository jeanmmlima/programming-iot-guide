#include <stdio.h>
#include <string.h>

// Função para verificar se a palavra é um palíndromo
int ehPalindromo(char palavra[]) {
    int inicio = 0;
    int fim = strlen(palavra) - 1;

    while (inicio < fim) {
        if (palavra[inicio] != palavra[fim]) {
            return 0; // Não é palíndromo
        }
        inicio++;
        fim--;
    }

    return 1; // É palíndromo
}

int main() {
    char palavra[100];

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    if (ehPalindromo(palavra)) {
        printf("'%s' é um palíndromo.\n", palavra);
    } else {
        printf("'%s' não é um palíndromo.\n", palavra);
    }

    return 0;
}