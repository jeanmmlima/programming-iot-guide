#include <stdio.h>

int main()
{
    int a = 5, b = 10, c = 0;

    int resultado_E = (a > 0) && (b > 10);
    printf("resultado E: %i \n", resultado_E);

    int resultado_OU = (a > 0) || (c > 0);
    printf("resultado OU: %i \n", resultado_OU);

    int resultado_NEGACAO = !(a > 0);
    printf("resultado NEGACAO: %i \n", resultado_NEGACAO);
    return 0;
}
