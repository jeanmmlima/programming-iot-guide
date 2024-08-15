#include <stdio.h>

int main() {
    int temIngresso = 0;       // 1 para verdadeiro (tem ingresso), 0 para falso
    int estaNaListaVIP = 1;    // 1 para verdadeiro (está na lista VIP), 0 para falso
    int idade = 20;            // Idade da pessoa
    int podeEntrar;

    // Expressão lógica que verifica as condições de entrada
    podeEntrar = (temIngresso || (estaNaListaVIP && idade > 18));

    // Imprime o resultado da expressão lógica
    printf("A pessoa pode entrar no evento: 1 - SIM, 0 - NÃO.\n");
    printf("%i\n",podeEntrar);

    return 0;
}