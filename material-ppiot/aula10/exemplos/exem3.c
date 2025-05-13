#include <stdio.h>

int main() {
    char palavra[] = "Ola!";

    palavra[0] = 'A'; // Modifica 'O' para 'A'
    palavra[2] = 'o'; // Modifica 'a' para 'o' (sem mudança)

    printf("%s\n", palavra); // Saída: "Alo!"

    return 0;
}