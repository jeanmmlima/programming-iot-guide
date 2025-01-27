#include <stdio.h>
#include <string.h>

int main() {
    char palavra[20] = "Olá";  // Espaço suficiente para armazenar outra string
    strcpy(palavra, "Alô!"); // Copiando uma nova string

    printf("%s\n", palavra); // Saída: "Mundo!"
    return 0;
}