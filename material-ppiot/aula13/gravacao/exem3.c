#include <stdio.h>

union SimplesUnion {
    int numero;
    char letra;
};

int main() {
    union SimplesUnion dados;

    dados.numero = 1000;
    printf("UNION (após atribuir int): %d\n", dados.numero);

    dados.letra = 'Z';
    printf("UNION (após atribuir char): %c\n", dados.letra);

    // Agora o valor do int provavelmente está corrompido
    printf("UNION (tentando acessar int depois): %d\n", dados.numero);

    return 0;
}