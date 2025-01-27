#include <stdio.h>

int main() {
    int i = 0;

    // Omissão da condição
    for (; ; i++) {
        printf("Valor de i: %d\n", i);
        
        // Saída manual do loop quando i alcançar 5
        if (i >= 5) {
            break;  // Sai do loop quando i for 5
        }
    }

    return 0;
}