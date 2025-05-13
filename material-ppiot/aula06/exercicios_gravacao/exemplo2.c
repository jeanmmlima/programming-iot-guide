#include <stdio.h>

int main()
{
    float nota1, nota2, nota3;
    float media;
    printf("Inserir primeira nota: \n");
    scanf("%f",&nota1);

    printf("Inserir segunda nota: \n");
    scanf("%f",&nota2);

    printf("Inserir terceira nota: \n");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;

    if(media >= 7){
        printf("Aluno aprovado!\n");
    } else {
        printf("Aluno reprovado!\n");
    }

    return 0;
}
