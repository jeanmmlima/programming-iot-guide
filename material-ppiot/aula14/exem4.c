#include <stdio.h>

int main() {
    int a = 10, b = 20, c = 30;
    int *meusPonteiros[3];  // array de ponteiros para int

    // Armazenando os endereços das variáveis no array
    meusPonteiros[0] = &a;
    meusPonteiros[1] = &b;
    meusPonteiros[2] = &c;

    // Acessando e imprimindo os valores via ponteiros
    for (int i = 0; i < 3; i++) {
        printf("Valor armazenado em meusPonteiros[%d] = %d\n", i, *meusPonteiros[i]);
    }

    return 0;
}