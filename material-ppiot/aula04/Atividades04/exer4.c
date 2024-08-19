#include <stdio.h>

int main() {
    float tempCelsius, tempKelvin;
    int resultado;

    // Solicita ao usuário para inserir a temperatura em Celsius
    printf("Insira a temperatura em Celsius: ");
    scanf("%f", &tempCelsius);

    // Converte a temperatura de Celsius para Kelvin
    tempKelvin = tempCelsius + 273.15;

    // Exibe as temperaturas em Celsius e Kelvin
    printf("Temperatura em Celsius: %.2f\n", tempCelsius);
    printf("Temperatura em Kelvin: %.2f\n", tempKelvin);

    // Verifica se a temperatura em Celsius está abaixo do Zero Kelvin
    resultado = (tempKelvin < 0);

    // Exibe o resultado
    printf("%d\n", resultado);

    return 0;
}
