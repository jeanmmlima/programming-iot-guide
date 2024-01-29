#include <stdio.h>

int main()
{
    int resultadoE1 = ((3 > 2) && (2 < 3));
    int resultadoE2 = ((3 > 2) && (2 < 1));
    int resultadoE3 = ((1 > 2) && (3 >= 1));
    int resultadoE4 = ((1 > 2) && (2 < 1));
    printf("\nE1: %d \n E2: %d \n E3: %d \n E4: %d \n"
    ,resultadoE1, resultadoE2,resultadoE3,resultadoE4);

    int resultadoOU1 = ((3 > 2) || (2 < 3));
    int resultadoOU2 = ((3 > 2) || (2 < 1));
    int resultadoOU3 = ((1 > 2) || (3 >= 1));
    int resultadoOU4 = ((1 > 2) || (2 < 1));
    printf("\nOU1: %d \n OU2: %d \n OU3: %d \n OU4: %d\n"
    ,resultadoOU1, resultadoOU2,resultadoOU3,resultadoOU4);

    int resultadoN1 = !((3 > 2) && (2 < 3));
    int resultadoN2 = !((1 > 2) || (2 < 1));
    printf("\nN1: %d\nN2: %d", resultadoN1, resultadoN2);

    return 0;
}
