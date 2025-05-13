#include <stdio.h>
#include <string.h>

int main() {
    char palavra[] = "Ola!";

    palavra[0] = 'A'; // Modifica 'O' para 'A'
    palavra[2] = 'o'; // Modifica 'a' para 'o' (sem mudança)

    printf("%s\n", palavra); // Saída: "Alo!"

    char palavra[20] = "Olá";  // Espaço suficiente para armazenar outra string
    strcpy(palavra, "Alô!"); // Copiando uma nova string

    printf("%s\n", palavra); // Saída: "Mundo!"

    return 0;
}