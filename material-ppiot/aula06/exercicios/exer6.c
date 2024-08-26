#include <stdio.h>

int main() {
    float peso, altura, imc;

    // Solicita o peso e a altura do usuário
    printf("Digite o seu peso (em kg): ");
    scanf("%f", &peso);

    printf("Digite a sua altura (em metros): ");
    scanf("%f", &altura);

    // Calcula o IMC
    imc = peso / (altura * altura);

    // Exibe o valor do IMC
    printf("Seu IMC é: %.2f\n", imc);

    // Determina e exibe o status do peso com base no IMC
    if (imc < 18.5) {
        printf("Status: Abaixo de Peso\n");
    } else if (imc < 25) {
        printf("Status: Peso Normal\n");
    } else if (imc < 30) {
        printf("Status: Sobrepeso\n");
    } else if (imc < 35) {
        printf("Status: Obesidade Grau I\n");
    } else if (imc < 40) {
        printf("Status: Obesidade Grau II\n");
    } else {
        printf("Status: Obesidade Mórbida\n");
    }

    return 0;
}