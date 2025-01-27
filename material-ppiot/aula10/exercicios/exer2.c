#include <stdio.h>
#include <string.h>

int main() {
    char codigo[20];  // Variável para armazenar o código digitado

    printf("Digite o código de acesso (6 caracteres): ");
    scanf("%s", codigo);  // Lê o código de acesso (não permite espaços)

    int tamanho = strlen(codigo);  // Obtém o tamanho da string

    if (tamanho == 6) {
        printf("Acesso permitido!\n");
    } else {
        printf("Código inválido! O código deve ter exatamente 6 caracteres.\n");
    }

    return 0;
}