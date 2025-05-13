#include <stdio.h>

// Definição da enumeração para os dias da semana
enum DiaDaSemana
{
    Domingo, //0
    Segunda, //1
    Terca, //2
    Quarta, //3
    Quinta, //4
    Sexta, //5
    Sabado //6
};

int main()
{
    enum DiaDaSemana hoje; // Declara uma variável do tipo DiaDaSemana
    hoje = Sexta;          // Atribui o valor Sexta-feira à variável

    switch (hoje)
    {
    case Domingo:
        printf("Hoje é domingo: dia de descanso!\n");
        break;
    case Segunda:
        printf("Hoje é segunda-feira: início da semana.\n");
        break;
    case Terca:
        printf("Hoje é terça-feira: vamos seguir em frente!\n");
        break;
    case Quarta:
        printf("Hoje é quarta-feira: meio da semana!\n");
        break;
    case Quinta:
        printf("Hoje é quinta-feira: quase lá!\n");
        break;
    case Sexta:
        printf("Hoje é sexta-feira: final de semana chegando!\n");
        break;
    case Sabado:
        printf("Hoje é sábado: aproveite o seu dia!\n");
        break;
    default:
        printf("Dia inválido.\n");
        break;
    }

    return 0;
}