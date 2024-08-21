#include <stdio.h>

int main() {
    int idade;

    printf("Digite sua idade: ");
    scanf("%d", &idade);

    if (idade >= 18) {
        printf("Você é maior de idade.\n");
    } else if (idade >= 16) {
        printf("Você pode votar, mas ainda não é maior de idade.\n");
    } else {
        printf("Você ainda não pode votar.\n");
    }

    return 0;
}