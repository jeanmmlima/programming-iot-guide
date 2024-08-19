#include <stdio.h>

#define LIMITE_KM 10.0 // Definindo a constante para o limite em quilômetros

int main() {
    float distanciaMetros, distanciaKm;
    int resultado;

    // Solicita ao usuário para inserir a distância em metros
    printf("Insira a distância em metros: ");
    scanf("%f", &distanciaMetros);

    // Converte a distância de metros para quilômetros
    distanciaKm = distanciaMetros / 1000.0;

    // Exibe a distância em quilômetros
    printf("Distância em quilômetros: %.2f km\n", distanciaKm);

    // Verifica se a distância está abaixo do limite
    resultado = (distanciaKm < LIMITE_KM);

    // Exibe o resultado
    printf("%d\n", resultado);

    return 0;
}
