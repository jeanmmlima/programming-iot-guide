#include <stdio.h>

int main() {
    float salario, abono = 0;
    int anosDeCasa;

    // Solicita o salário e o tempo de casa ao usuário
    printf("Digite o salário do funcionário: R$ ");
    scanf("%f", &salario);

    printf("Digite o tempo de casa (em anos): ");
    scanf("%d", &anosDeCasa);

    // Verifica o tempo de casa e calcula o abono
    if (anosDeCasa < 1) {
        // Funcionário com menos de 1 ano de casa, sem abono
        abono = 0;
        printf("Funcionário com menos de 1 ano de casa, sem direito a abono.\n");
    } else if (anosDeCasa < 10) {
        // Abono de 10% para entre 1 e menos de 10 anos de casa
        abono = salario * 0.10;
        printf("O abono do funcionário será de: R$ %.2f\n", abono);
    } else {
        // Abono de 25% para 10 anos ou mais de casa
        abono = salario * 0.25;
        printf("O abono do funcionário será de: R$ %.2f\n", abono);
    }

    return 0;
}