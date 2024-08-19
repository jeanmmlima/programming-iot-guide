#include <stdio.h>

int main() {
    float tempNatal, tempMossoro;
    int resultado;

    // Solicita ao usuário para inserir a temperatura de Natal
    printf("Insira a temperatura de Natal: ");
    scanf("%f", &tempNatal);

    // Solicita ao usuário para inserir a temperatura de Mossoró
    printf("Insira a temperatura de Mossoró: ");
    scanf("%f", &tempMossoro);

    // Usa o operador relacional para comparar as temperaturas
    resultado = tempNatal <= tempMossoro;

    // Exibe o resultado
    printf("%d\n", resultado);

    return 0;
}
