#include <stdio.h>

struct DadosAmbiente{
    float temperatura;
    float pressao;
    float luminosidade;
};

void exibirDadosAmbiente(struct DadosAmbiente dados){
    printf("Os dados do ambiente são: \n");
    printf("Temperatura: %.2f\n", dados.temperatura);
    printf("Pressão: %.2f\n", dados.pressao);
    printf("Luminosidade: %.2f\n", dados.luminosidade);
}

int main()
{
    struct DadosAmbiente meusDados;

    meusDados.temperatura = 40;
    meusDados.pressao = 1000;
    meusDados.luminosidade =  350;

    exibirDadosAmbiente(meusDados);



    return 0;
}
