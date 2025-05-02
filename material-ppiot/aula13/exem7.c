#include <stdio.h>

// Enum para os estados do ambiente
enum EstadoAmbiente {
    AMBIENTE_NORMAL,
    ALTA_TEMPERATURA,
    BAIXA_UMIDADE,
    FUMAÇA_DETECTADA
};

// Enum para ações que o sistema pode tomar
enum AcaoIoT {
    ACAO_NENHUMA,
    ATIVAR_COOLER,
    ATIVAR_UMIDIFICADOR,
    ATIVAR_ALARME_INCENDIO
};

// Função que decide a ação com base no estado
enum AcaoIoT decidirAcao(enum EstadoAmbiente estado) {
    switch (estado) {
        case AMBIENTE_NORMAL:
            return ACAO_NENHUMA;
        case ALTA_TEMPERATURA:
            return ATIVAR_COOLER;
        case BAIXA_UMIDADE:
            return ATIVAR_UMIDIFICADOR;
        case FUMAÇA_DETECTADA:
            return ATIVAR_ALARME_INCENDIO;
        default:
            return ACAO_NENHUMA;
    }
}

int main() {
    enum EstadoAmbiente estadoAtual = ALTA_TEMPERATURA;

    enum AcaoIoT acao = decidirAcao(estadoAtual);

    switch (acao) {
        case ACAO_NENHUMA:
            printf("Ambiente estável. Nenhuma ação necessária.\n");
            break;
        case ATIVAR_COOLER:
            printf("Temperatura alta! Ativando cooler...\n");
            break;
        case ATIVAR_UMIDIFICADOR:
            printf("Umidade baixa! Ativando umidificador...\n");
            break;
        case ATIVAR_ALARME_INCENDIO:
            printf("Fumaça detectada! Ativando alarme de incêndio!\n");
            break;
    }

    return 0;
}