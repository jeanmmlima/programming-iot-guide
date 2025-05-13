#include <stdio.h>

int quadrado(int n); // protótipo

int main() {
    int x = 4;
    printf("Quadrado: %d\n", quadrado(x));
    return 0;
}

int quadrado(int n) {
    return n * n;
}