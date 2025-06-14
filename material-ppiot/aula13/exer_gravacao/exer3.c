#include <stdio.h>

enum DiasDaSemana{
    Domingo, //0
    Segunda, //1
    Terca, //2
    Quarta, //3
    Quinta,
    Sexta,
    Sabado
};

int main()
{
    enum DiasDaSemana meuDia;

    meuDia = Sexta;

    switch (meuDia)
    {
    case Domingo:
        printf("Hoje é domingo!\n");
        break;
    case Segunda:
        printf("Hoje é segunda!\n");
        break;
    case Terca:
        printf("Hoje é terça!\n");
        break;
    case Quarta:
        printf("Hoje é quarta!\n");
        break;
    case Quinta:
        printf("Hoje é quinta!\n");
        break;
    case Sexta:
        printf("Hoje é sexta!\n");
        break;
    case Sabado:
        printf("Hoje é sábado!\n");
        break;
    default:
        printf("Dia inválido!\n"); 
        break;
    }
    return 0;
}
