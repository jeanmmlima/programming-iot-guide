#include <stdio.h>
#include <string.h>

int main() {
    char origem[] = "C é poderoso!";
    char destino[50];

    strcpy(destino, origem);

    printf("String copiada: %s\n", destino);
    return 0;
}