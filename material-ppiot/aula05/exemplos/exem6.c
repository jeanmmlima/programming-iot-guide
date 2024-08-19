#include <stdio.h>

int main() {
    int idade = 20;
    int temCarteiraMotorista = 1;  // 1 para verdadeiro (tem carteira), 0 para falso
    int podeDirigir;

    // Expressão lógica que verifica se a pessoa é maior de 18 anos E tem carteira de motorista
    podeDirigir = (idade >= 18) && temCarteiraMotorista;

    // Imprime o resultado da expressão lógica
    printf("A pessoa pode dirigir: 1 - SIM, 0 - NÃO.\n");
    printf("%i\n",podeDirigir);
    
    return 0;
}