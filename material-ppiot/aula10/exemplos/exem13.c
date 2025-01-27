#include <stdio.h>
#include <string.h>

int main() {
    char str1[] = "maçã";
    char str2[] = "banana";

    int resultado = strcmp(str1, str2);

    if (resultado == 0)
        printf("As strings são iguais.\n");
    else
        printf("As strings são diferentes.\n");

    return 0;
}