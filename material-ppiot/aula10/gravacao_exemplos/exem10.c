#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "Programação";
    int tamanho = strlen(palavra); 

    printf("A string \"%s\" tem %d caracteres.\n", palavra, tamanho);

    char origem[] = "C é poderoso!";
    char destino[50];

    strcpy(destino, origem);
    printf("String copiada: %s\n", destino);

    char destino[50] = "Olá, ";
    char origem[] = "mundo!";

    strcat(destino, origem);
    printf("%s\n", destino);


    return 0;
}