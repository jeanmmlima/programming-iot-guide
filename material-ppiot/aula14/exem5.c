#include <stdio.h>

int main() {
    int x = 50;          // uma variável comum
    int *p;              // ponteiro para int
    int **p2;            // ponteiro para ponteiro de int

    p = &x;              // p recebe o endereço de x
    p2 = &p;             // p2 recebe o endereço de p

    printf("Valor de x: %d\n", x);          // imprime 50
    printf("Valor de x via *p: %d\n", *p);  // também imprime 50
    printf("Valor de x via **p2: %d\n", **p2);  // imprime 50 novamente

    return 0;
}