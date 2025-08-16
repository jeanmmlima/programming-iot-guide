#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TOTAL_SENSORES 3
#define MAX_LEITURAS 20

// Definição das estruturas
struct Leitura {
    float valor;
    struct tm data_hora;
};

struct Sensor {
    char nome[20];
    struct Leitura leituras[MAX_LEITURAS];
    int total_leituras;
};

// Simulações realistas de leitura
float simular_ph() {
    return 6.0 + (rand() % 200) / 100.0; // 6.0 a 8.0
}

float simular_turbidez() {
    return 0.5 + (rand() % 300) / 10.0; // 0.5 a 30.0 NTU
}

float simular_temperatura() {
    return 10.0 + (rand() % 250) / 10.0; // 10.0 a 35.0 ºC
}

// Inicializa sensores
void inicializar_sensores(struct Sensor *sensores) {
    strcpy(sensores[0].nome, "pH");
    strcpy(sensores[1].nome, "Turbidez");
    strcpy(sensores[2].nome, "Temperatura");

    for (int i = 0; i < TOTAL_SENSORES; i++) {
        sensores[i].total_leituras = 0;
    }
}

// Registra uma nova leitura em um sensor
void registrar_leitura(struct Sensor *s) {
    if (s->total_leituras >= MAX_LEITURAS) {
        printf("⚠️  Sensor %s atingiu o limite de leituras.\n", s->nome);
        return;
    }

    float valor = 0.0;
    if (strcmp(s->nome, "pH") == 0) valor = simular_ph();
    else if (strcmp(s->nome, "Turbidez") == 0) valor = simular_turbidez();
    else if (strcmp(s->nome, "Temperatura") == 0) valor = simular_temperatura();

    time_t agora = time(NULL);
    struct tm *info_tempo = localtime(&agora);

    s->leituras[s->total_leituras].valor = valor;
    s->leituras[s->total_leituras].data_hora = *info_tempo;
    s->total_leituras++;
}

// Exibe a última leitura de um sensor
void mostrar_ultima_leitura(struct Sensor *s) {
    if (s->total_leituras == 0) return;

    char buffer[30];
    int idx = s->total_leituras - 1;
    strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", &s->leituras[idx].data_hora);

    printf("📌 Última leitura de %s: %.2f | DataHora: %s\n",
           s->nome, s->leituras[idx].valor, buffer);
}

// Calcula a média das leituras
float calcular_media(struct Sensor *s) {
    float soma = 0;
    for (int i = 0; i < s->total_leituras; i++) {
        soma += s->leituras[i].valor;
    }
    return s->total_leituras > 0 ? soma / s->total_leituras : 0;
}

// Salva os dados no arquivo CSV
void salvar_em_csv(struct Sensor *sensores) {
    FILE *fp = fopen("qualidade_agua.csv", "w");
    if (!fp) {
        printf("Erro ao criar arquivo!\n");
        return;
    }

    fprintf(fp, "Sensor,Valor,DataHora\n");
    char buffer[30];

    for (int i = 0; i < TOTAL_SENSORES; i++) {
        for (int j = 0; j < sensores[i].total_leituras; j++) {
            strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", &sensores[i].leituras[j].data_hora);
            fprintf(fp, "%s,%.2f,%s\n", sensores[i].nome, sensores[i].leituras[j].valor, buffer);
        }
    }

    fclose(fp);
    printf("📁 Leituras salvas em 'qualidade_agua.csv'\n");
}

// Função principal
int main() {
    srand(time(NULL));
    struct Sensor sensores[TOTAL_SENSORES];
    inicializar_sensores(sensores);

    char continuar = 's';
    int rodada = 1;

    while (continuar == 's' || continuar == 'S') {
        printf("\n🌊 Rodada %d de medições:\n", rodada);

        for (int i = 0; i < TOTAL_SENSORES; i++) {
            registrar_leitura(&sensores[i]);
            mostrar_ultima_leitura(&sensores[i]);
        }

        printf("\nDeseja registrar uma nova rodada? (s/n): ");
        scanf(" %c", &continuar);
        rodada++;
    }

    printf("\n📊 Médias por sensor:\n");
    for (int i = 0; i < TOTAL_SENSORES; i++) {
        printf("• %s: %.2f\n", sensores[i].nome, calcular_media(&sensores[i]));
    }

    salvar_em_csv(sensores);
    return 0;
}