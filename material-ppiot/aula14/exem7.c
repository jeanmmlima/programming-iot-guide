#include <stdio.h>
#include <stdlib.h>

int main() {
    int *numeros;
    int qtd = 4;

    // Aloca espaço para 4 inteiros
    numeros = (int*) malloc(qtd * sizeof(int));

    // Verificação de sucesso da alocação
    if (numeros == NULL) {
        printf("Erro: não foi possível alocar memória!\n");
        exit(1);
    }

    for (int i = 0; i < qtd; i++) {
        printf("Digite o valor para a posição %d: ", i);
        scanf("%d", &numeros[i]);
    }

    printf("Valores inseridos:\n");
    for (int i = 0; i < qtd; i++) {
        printf("%d ", numeros[i]);
    }

    free(numeros); // Libera a memória alocada
    return 0;
}