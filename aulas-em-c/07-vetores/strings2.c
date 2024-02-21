#include <stdio.h>
#include <string.h>

int main() {
    char str1[20] = "Hello";
    char str2[20] = "World";
    char dest[20];
    int result;

    // Exemplo de strcpy()
    strcpy(dest, str1);
    printf("strcpy: %s\n", dest);

    // Exemplo de strncpy()
    strncpy(dest, str2, 3); // Copia apenas os 3 primeiros caracteres de str2
    dest[3] = '\0'; // Garante que a string resultante seja terminada corretamente
    printf("strncpy: %s\n", dest);

    // Exemplo de strcat()
    strcat(str1, str2);
    printf("strcat: %s\n", str1);

    // Exemplo de strcmp()
    result = strcmp(str1, str2);
    if (result == 0)
        printf("strcmp: As strings são iguais\n");
    else if (result < 0)
        printf("strcmp: str1 vem antes de str2\n");
    else
        printf("strcmp: str2 vem antes de str1\n");

    // Exemplo de strlen()
    printf("strlen de str1: %lu\n", strlen(str1));
    printf("strlen de str2: %lu\n", strlen(str2));

    return 0;
}
