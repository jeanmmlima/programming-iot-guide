#include <stdio.h>

float calcularMedia(int n1, int n2, int n3){
    float media = (n1 + n2 + n3) / 3.0;
    return media;
}

int main()
{
    int nota1 = 9, nota2 = 2, nota3 = 7;

    float media = calcularMedia(nota1, nota2, nota3);

    printf("A media é: %f\n", media);
    return 0;
}
