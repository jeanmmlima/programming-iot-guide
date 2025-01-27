#include <stdio.h>

int main() {
    int i;

    // Laço for sem incremento explícito
    for (i = 0; i < 5;) {
        printf("Valor de i: %d\n", i);
        
        // Incremento manual dentro do corpo do loop
        i++;
    }

    return 0;
}