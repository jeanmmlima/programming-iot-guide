#include <stdio.h>
#include <math.h>

int main() {
    float a, b, c;  // Coeficientes da equação
    float delta, raiz1, raiz2;

    // Solicita ao usuário que insira os coeficientes da equação
    printf("Digite o valor de a: ");
    scanf("%f", &a);
    printf("Digite o valor de b: ");
    scanf("%f", &b);
    printf("Digite o valor de c: ");
    scanf("%f", &c);

    // Calcula o discriminante (delta)
    delta = b * b - 4 * a * c;

    //delta precisa ser MAIOR ou IGUAL a zero. 
    //Do contratio o programa vai falhar ao calcular as raizes
    //aprenderemos melhor como tratar esse caso
    
    // Calcula as duas raízes reais
    raiz1 = (-b + sqrt(delta)) / (2 * a);
    raiz2 = (-b - sqrt(delta)) / (2 * a);

    // Exibe os resultados
    printf("As raízes da equação são: %.2f e %.2f\n", raiz1, raiz2);

    return 0;
}