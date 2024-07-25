#include <stdio.h>

int main() {
    int intVar = 10;
    double doubleVar = 20.5;
    float floatVar = 30.5f;
    char charVar = 'A';

    printf("Valor de intVar: %d\n", intVar);
    printf("Valor de doubleVar: %.2lf\n", doubleVar);
    printf("Valor de floatVar: %.2f\n", floatVar);
    printf("Valor de charVar: %c\n", charVar);

    return 0;
}
