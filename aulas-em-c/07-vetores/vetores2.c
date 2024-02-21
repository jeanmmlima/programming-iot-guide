#include <stdio.h>
#include <stdlib.h>
int main()
{
    float notas[10];
    float media = 0;
    float somaNotas = 0;
    // lendo notas - escrevendo no vetor
    for (int i = 0; i < 10; i++)
    {
        printf("Digite a nota do aluno %d: ", i);
        scanf("%f", &notas[i]);
        somaNotas += notas[i];
    }
    // calcula a media
    media = somaNotas / 10;
    // avalia os alunos que tiveram media acima de 7
    for (int j = 0; j < 10; j++)
    {
        if (notas[j] >= 7)
        {
            printf("Aluno %d foi aprovado \n", j);
        }
        else
        {
            printf("Aluno %d em recuperacao \n", j);
        }
    }

    return 0;
}
