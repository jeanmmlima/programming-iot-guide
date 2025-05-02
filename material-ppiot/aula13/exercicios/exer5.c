#include <stdio.h>
#include <string.h>

enum TipoDado {
    INTEIRO,
    REAL,
    TEXTO
};

union Valor {
    int inteiro;
    float real;
    char texto[30];
};

struct CampoFormulario {
    enum TipoDado tipo;
    union Valor valor;
};

void mostrarCampo(struct CampoFormulario campo) {
    switch (campo.tipo) {
        case INTEIRO:
            printf("Valor inteiro: %d\n", campo.valor.inteiro);
            break;
        case REAL:
            printf("Valor real: %.2f\n", campo.valor.real);
            break;
        case TEXTO:
            printf("Texto informado: %s\n", campo.valor.texto);
            break;
        default:
            printf("Tipo desconhecido.\n");
    }
}

int main() {
    struct CampoFormulario campo;
    int opcao;

    printf("Selecione o tipo de dado:\n");
    printf("1 - Inteiro\n");
    printf("2 - Real\n");
    printf("3 - Texto\n");
    printf("Opcao: ");
    scanf("%d", &opcao);

    getchar(); // limpar buffer do teclado

    switch (opcao) {
        case 1:
            campo.tipo = INTEIRO;
            printf("Digite um número inteiro: ");
            scanf("%d", &campo.valor.inteiro);
            break;
        case 2:
            campo.tipo = REAL;
            printf("Digite um número real: ");
            scanf("%f", &campo.valor.real);
            break;
        case 3:
            campo.tipo = TEXTO;
            printf("Digite um texto: ");
            fgets(campo.valor.texto, 30, stdin);
            campo.valor.texto[strcspn(campo.valor.texto, "\n")] = '\0'; // remover newline
            break;
        default:
            printf("Opção inválida.\n");
            return 1;
    }

    mostrarCampo(campo);

    return 0;
}