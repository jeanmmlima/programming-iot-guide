#include <stdio.h>

int main() {
    // Matriz de leituras dos sensores [4 sensores] x [5 horários]
    int qualidade_ar[4][5] = {
        {45, 50, 55, 60, 70},  // Sensor 1
        {80, 85, 90, 95, 110}, // Sensor 2
        {60, 65, 75, 80, 85},  // Sensor 3
        {90, 95, 100, 105, 120} // Sensor 4
    };

    // Variável para indicar se houve alerta
    int alerta = 0;

    // Percorre os sensores e horários verificando a qualidade do ar
    for (int sensor = 0; sensor < 4; sensor++) {
        for (int horario = 0; horario < 5; horario++) {
            if (qualidade_ar[sensor][horario] > 100) {
                printf("ALERTA: Nível crítico de poluição no Sensor %d, Horário %d! (IQA = %d)\n", 
                        sensor + 1, horario + 1, qualidade_ar[sensor][horario]);
                alerta = 1;
            }
        }
    }

    // Mensagem final caso não haja alerta
    if (!alerta) {
        printf("Qualidade do ar dentro dos limites seguros.\n");
    }

    return 0;
}