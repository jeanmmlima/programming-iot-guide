#include <stdio.h>
#include <stdlib.h>
int main()
{
    float notas[5];

    // Atribuindo valores
    notas[0] = 10;
    notas[1] = 9.5;
    notas[2] = 2.5;

    printf("Digite a nota do aluno 4: \n");
    scanf("%f", &notas[3]);

    printf("Digite a nota do aluno 5: \n");
    scanf("%f", &notas[4]);

    // exibindo valores
    printf("Nota do aluno 1: %f\n", notas[0]);
    printf("Nota do aluno 2: %f\n", notas[1]);
    printf("Nota do aluno 3: %f\n", notas[2]);
    printf("Nota do aluno 4: %f\n", notas[3]);
    printf("Nota do aluno 5: %f\n", notas[4]);
}