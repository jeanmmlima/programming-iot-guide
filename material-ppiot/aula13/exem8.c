#include <stdio.h>

// Define os tipos de leitura possíveis
enum TipoLeitura {
    LEITURA_TEMPERATURA,
    LEITURA_UMIDADE,
    LEITURA_GAS
};

// Union para armazenar diferentes tipos de leitura
union DadoSensor {
    float temperatura; // °C
    float umidade;     // %
    int gasPPM;        // Partes por milhão (PPM)
};

// Estrutura que agrupa o tipo de leitura e o dado correspondente
struct LeituraSensor {
    enum TipoLeitura tipo;
    union DadoSensor dado;
};

void imprimirLeitura(struct LeituraSensor leitura) {
    switch (leitura.tipo) {
        case LEITURA_TEMPERATURA:
            printf("Temperatura: %.2f °C\n", leitura.dado.temperatura);
            break;
        case LEITURA_UMIDADE:
            printf("Umidade: %.2f %%\n", leitura.dado.umidade);
            break;
        case LEITURA_GAS:
            printf("Gás: %d ppm\n", leitura.dado.gasPPM);
            break;
        default:
            printf("Tipo de leitura desconhecido.\n");
    }
}

int main() {
    struct LeituraSensor leitura1;
    
    // Simular leitura de temperatura
    leitura1.tipo = LEITURA_TEMPERATURA;
    leitura1.dado.temperatura = 25.7;
    imprimirLeitura(leitura1);

    // Simular leitura de umidade
    leitura1.tipo = LEITURA_UMIDADE;
    leitura1.dado.umidade = 42.5;
    imprimirLeitura(leitura1);

    // Simular leitura de gás
    leitura1.tipo = LEITURA_GAS;
    leitura1.dado.gasPPM = 350;
    imprimirLeitura(leitura1);

    return 0;
}