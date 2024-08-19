#include <stdio.h>

#define VEL_MAX 80;

int main() {

    float velocidadeMs, velocidadeKmh;
    int acimaDaMaxima;

    // Pedir ao usuário para inserir a velocidade em m/s
    printf("Insira a velocidade em metros por segundo (m/s): ");
    scanf("%f", &velocidadeMs);

    // Converter a velocidade para km/h
    velocidadeKmh = velocidadeMs * 3.6; //operador de multiplicação
    printf("Velocidade em quilometros por hora (Km/h): %.2f \n", velocidadeKmh);

    // Verificar se a velocidade está igual ou acima da máxima permitida
    acimaDaMaxima = velocidadeKmh >= VEL_MAX; //operador relacional
    printf("Velocidade está igual ou acima da máxima permitida? (1 - está acima ou 0 - não está acima) %d\n", acimaDaMaxima);

    return 0;
}