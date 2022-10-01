#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float notas[5] = {10, 2.5, 3.4, 7.6, 8.9};
    float copiaNotas[5];

    copiaNotas = notas;

    //exibindo valores
    printf("Nota do aluno 1: %f\n", copiaNotas[0]);
    printf("Nota do aluno 2: %f\n", copiaNotas[1]);
    printf("Nota do aluno 3: %f\n", copiaNotas[2]);
    printf("Nota do aluno 4: %f\n", copiaNotas[3]);
    printf("Nota do aluno 5: %f\n", copiaNotas[4]);
    
}
