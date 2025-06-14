#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>

#define TOTAL_SENSORES 3
#define MAX_LEITURAS 100

enum DiaSemana {
    DOMINGO, SEGUNDA, TERCA, QUARTA, QUINTA, SEXTA, SABADO
};

const char* nomes_dias[] = {
    "Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"
};

struct Leitura{
    float valor;
    enum DiaSemana dia;
    struct tm horario;
} ;

struct Sensor{
    char nome[30];
    char unidade[10];
    struct Leitura leituras[MAX_LEITURAS];
    int total_leituras;
};

float simula_leitura_temp(){
    return 20.0 + (rand() % 1500) / 100.0;
}

float simula_leitura_umidade(){
    return 30.0 + (rand() % 7000) / 100.0;
}

float simula_leitura_pressao(){
    return 900.0 + (rand() % 3000) / 10.0;
}

// Inicializa os sensores
void inicializar_sensores(struct Sensor *sensores) {
    strcpy(sensores[0].nome, "Temperatura");
    strcpy(sensores[0].unidade, "°C");

    strcpy(sensores[1].nome, "Umidade");
    strcpy(sensores[1].unidade, "%");

    strcpy(sensores[2].nome, "Pressão");
    strcpy(sensores[2].unidade, "hPa");

    for (int i = 0; i < TOTAL_SENSORES; i++) {
        sensores[i].total_leituras = 0;
    }
}

// Realiza uma leitura para um sensor
void registrar_leitura(struct Sensor *s) {
    if (s->total_leituras >= MAX_LEITURAS) {
        printf("⚠️  Sensor %s atingiu o limite de %d leituras.\n", s->nome, MAX_LEITURAS);
        return;
    }

    int idx = s->total_leituras;

    if (strcmp(s->unidade, "°C") == 0)
        s->leituras[idx].valor = simula_leitura_temp();
    else if (strcmp(s->unidade, "%") == 0)
        s->leituras[idx].valor = simula_leitura_umidade();
    else if (strcmp(s->unidade, "hPa") == 0)
        s->leituras[idx].valor = simula_leitura_pressao();

    time_t now = time(NULL);
    struct tm *tm_info = localtime(&now);

    s->leituras[idx].dia = tm_info->tm_wday;
    s->leituras[idx].horario = *tm_info;

    s->total_leituras++;
}

// Exibe todas as leituras de um sensor
void mostrar_leituras(struct Sensor *s) {
    char buffer[30];
    printf("\n📊 Leituras do sensor %s (%s):\n", s->nome, s->unidade);
    for (int i = 0; i < s->total_leituras; i++) {
        strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", &s->leituras[i].horario);
        printf("Leitura %02d: %.2f %s | Dia: %s | Horário: %s\n",
               i + 1,
               s->leituras[i].valor,
               s->unidade,
               nomes_dias[s->leituras[i].dia],
               buffer);
    }
}

void mostrar_ultima_leitura(struct Sensor *s) {
    char buffer[30];
    int ultima_leitura = s->total_leituras - 1;
    printf("\n📊 Leituras do sensor %s (%s):\n", s->nome, s->unidade);
        strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", &s->leituras[ultima_leitura].horario);
        printf("Leitura %02d: %.2f %s | Dia: %s | Horário: %s\n",
               ultima_leitura+1,
               s->leituras[ultima_leitura].valor,
               s->unidade,
               nomes_dias[s->leituras[ultima_leitura].dia],
               buffer);
    
}

// Calcula a média das leituras
float calcular_media(struct Sensor *s) {
    if (s->total_leituras == 0) return 0;
    float soma = 0;
    for (int i = 0; i < s->total_leituras; i++)
        soma += s->leituras[i].valor;
    return soma / s->total_leituras;
}

int sensores_atingiram_limite(struct Sensor *sensores) {
    for (int i = 0; i < TOTAL_SENSORES; i++) {
        if (sensores[i].total_leituras < MAX_LEITURAS)
            return 0; // Ainda há espaço
    }
    return 1; // Todos os sensores chegaram ao limite
}

void gravar_leituras_em_arquivo(struct Sensor *sensores) {
    FILE *fp = fopen("leituras.csv", "w");

    if (fp == NULL) {
        printf("Erro ao criar o arquivo!\n");
        return;
    }

    // Cabeçalho do CSV
    fprintf(fp, "Sensor,Valor,Unidade,Dia,DataHora\n");

    char buffer[30];
    for (int i = 0; i < TOTAL_SENSORES; i++) {
        for (int j = 0; j < sensores[i].total_leituras; j++) {
            strftime(buffer, sizeof(buffer), "%d/%m/%Y %H:%M:%S", &sensores[i].leituras[j].horario);

            fprintf(fp, "%s,%.2f,%s,%s,%s\n",
                    sensores[i].nome,
                    sensores[i].leituras[j].valor,
                    sensores[i].unidade,
                    nomes_dias[sensores[i].leituras[j].dia],
                    buffer);
        }
    }

    fclose(fp);
    printf("\n📁 Dados salvos no arquivo 'leituras.csv'\n");
}

int main() {
    srand(time(NULL));
    struct Sensor sensores[TOTAL_SENSORES];
    inicializar_sensores(sensores);

    char resposta;
    int rodada = 1;

    printf("=== SIMULADOR DE LEITURAS IOT ===\n");

    while (1) {
        printf("\n🔄 Rodada %d:\n", rodada);

        for (int i = 0; i < TOTAL_SENSORES; i++) {
            registrar_leitura(&sensores[i]);
            mostrar_ultima_leitura(&sensores[i]);
        }

        if (sensores_atingiram_limite(sensores)) {
            printf("\n🚫 Todos os sensores atingiram o limite máximo de leituras (%d).\n", MAX_LEITURAS);
            break;
        }

        printf("\nDeseja realizar uma nova rodada de leituras? (s/n): ");
        scanf(" %c", &resposta);

        if (resposta == 'n' || resposta == 'N') {
            break;
        }

        rodada++;
    }

    printf("\n==============================\n");
    printf("📦 DADOS FINAIS DAS LEITURAS\n");
    printf("==============================\n");

    for (int i = 0; i < TOTAL_SENSORES; i++) {
        mostrar_leituras(&sensores[i]);
        float media = calcular_media(&sensores[i]);
        printf("Média: %.2f %s\n", media, sensores[i].unidade);
    }

    gravar_leituras_em_arquivo(sensores);

    return 0;
}