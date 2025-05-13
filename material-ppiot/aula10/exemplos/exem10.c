#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "Programação";
    int tamanho = strlen(palavra); 

    printf("A string \"%s\" tem %d caracteres.\n", palavra, tamanho);
    return 0;
}