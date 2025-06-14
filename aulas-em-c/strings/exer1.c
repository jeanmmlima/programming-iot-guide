#include <stdio.h>
#include <string.h>

int main() {
    char str[101];
    char palavra[101];
    char mais_longa[101] = "";
    int palavras = 0, tam = 0, max_len = 0;

    printf("Digite uma string (até 100 caracteres):\n");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = '\0';  // remove o '\n'

    for (int i = 0; i <= strlen(str); i++) {
        if (str[i] != ' ' && str[i] != '\0') {
            palavra[tam] = str[i];
            tam++;  // incremento fora do índice
        } else if (tam > 0) {
            palavra[tam] = '\0';
            palavras++;
            if (tam > max_len) {
                max_len = tam;
                strcpy(mais_longa, palavra);
            }
            tam = 0;
        }
    }

    printf("Número de palavras: %d\n", palavras);
    printf("Palavra mais longa: %s\n", mais_longa);

    return 0;
}