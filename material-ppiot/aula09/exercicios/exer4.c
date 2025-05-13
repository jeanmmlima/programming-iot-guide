#include <stdio.h>

int main() {
    char caracteres[10];  // Vetor para armazenar os 10 caracteres
    char consoantes[10];  // Vetor para armazenar as consoantes lidas
    int contador = 0;     // Contador de consoantes
    int i;

    // Leitura dos 10 caracteres
    printf("Digite 10 caracteres:\n");
    for (i = 0; i < 10; i++) {
        printf("Caracter %d: ", i + 1);
        scanf(" %c", &caracteres[i]);  // Lê um único caractere
    }

    // Identificação de consoantes
    for (i = 0; i < 10; i++) {
        char c = caracteres[i];
        // Verifica se é uma letra e não é uma vogal
        if ((c >= 'a' && c <= 'z') && !(c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')) {
            consoantes[contador] = c;  // Armazena a consoante
            contador++;                // Incrementa o contador
        }
    }

    // Exibe os resultados
    printf("\nNúmero de consoantes lidas: %d\n", contador);
    if (contador > 0) {
        printf("Consoantes: ");
        for (i = 0; i < contador; i++) {
            printf("%c ", consoantes[i]);
        }
        printf("\n");
    } else {
        printf("Nenhuma consoante foi lida.\n");
    }

    return 0;
}