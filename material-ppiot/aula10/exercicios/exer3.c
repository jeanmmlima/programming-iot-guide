#include <stdio.h>
#include <string.h>

int main() {
    char sensor[10];  // Variável para armazenar a entrada do sensor
    char temperatura[5]; // Armazena temperatura se necessário

    printf("Digite o código do sensor (TEMP, HUM, LUX): ");
    scanf("%s", sensor);

    if (strcmp(sensor, "TEMP") == 0) {
        printf("Sensor de Temperatura Ativado.\n");
        printf("Informe a temperatura atual: ");
        scanf("%s", temperatura);
        printf("Temperatura registrada: %s°C\n", temperatura);
    } 
    else if (strcmp(sensor, "HUM") == 0) {
        printf("Sensor de Umidade Ativado.\n");
    } 
    else if (strcmp(sensor, "LUX") == 0) {
        printf("Sensor de Luminosidade Ativado.\n");
    } 
    else {
        printf("Sensor desconhecido.\n");
    }

    return 0;
}