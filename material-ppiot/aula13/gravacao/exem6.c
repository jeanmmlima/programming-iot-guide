#include <stdio.h>

// Definição da estrutura que representa os dados do sensor
struct DadosAmbiente
{
    float temperatura; // Em graus Celsius
    float umidade;     // Em porcentagem
    int luminosidade;  // Em lux (unidade de intensidade luminosa)
};

// Função para exibir os dados do ambiente
void exibirDados(struct DadosAmbiente dados)
{
    printf("Temperatura: %.2f °C\n", dados.temperatura);
    printf("Umidade: %.2f %%\n", dados.umidade);
    printf("Luminosidade: %d lux\n", dados.luminosidade);
}

int main()
{
    struct DadosAmbiente sensor1;

    // Simula a leitura dos sensores
    sensor1.temperatura = 24.7;
    sensor1.umidade = 60.5;
    sensor1.luminosidade = 350;

    // Exibe os dados capturados
    exibirDados(sensor1);

    return 0;
}
