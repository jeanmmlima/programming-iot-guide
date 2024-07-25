#include <stdio.h>

#define GRAVITY 9.81 // Definindo uma constante com #define
#define MAX_USERS 100 // Definindo uma constante com #define

int main() {
    // Variáveis
    int age = 25; // Declarando e inicializando uma variável inteira
    float height = 1.75f; // Declarando e inicializando uma variável de ponto flutuante
    double balance = 12345.67; // Declarando e inicializando uma variável de ponto flutuante de precisão dupla
    char grade = 'A'; // Declarando e inicializando uma variável de caractere

    // Constantes
    const double PI = 3.14159; // Definindo uma constante com const
    const int MAX_SCORE = 100; // Definindo uma constante com const
    const float TEMPERATURE = 36.6f; // Definindo uma constante com const
    const char INITIAL = 'J'; // Definindo uma constante com const

    // Imprimindo as variáveis
    printf("Idade: %d\n", age); // Imprime a idade
    printf("Altura: %.2f\n", height); // Imprime a altura
    printf("Saldo: %.2lf\n", balance); // Imprime o saldo
    printf("Nota: %c\n", grade); // Imprime a nota

    // Imprimindo as constantes
    printf("Gravidade: %.2f\n", GRAVITY); // Imprime a gravidade
    printf("Máximo de usuários: %d\n", MAX_USERS); // Imprime o máximo de usuários
    printf("Valor de PI: %.5f\n", PI); // Imprime o valor de PI
    printf("Pontuação máxima: %d\n", MAX_SCORE); // Imprime a pontuação máxima
    printf("Temperatura: %.1f\n", TEMPERATURE); // Imprime a temperatura
    printf("Inicial: %c\n", INITIAL); // Imprime a inicial

    return 0;
}
