#include <stdio.h>

int main() {
    char palavra[] = "Linguagem C";

    for (int i = 0; palavra[i] != '\0'; i++) {
        printf("%c\n", palavra[i]);
    }

    return 0;
}