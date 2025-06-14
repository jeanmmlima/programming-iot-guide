#include <stdio.h>
#include <string.h>

struct Produto{
    int codigo;
    float preco;
    char nome[50];
};

int main()
{
    struct Produto meuProduto;

    meuProduto.codigo = 1001;
    meuProduto.preco = 150.5 + 50;

    strcpy(meuProduto.nome,"Mouse");

    printf("Informações do Produto\n código: %d,\n nome: %s,\n preço: %f \n", meuProduto.codigo, meuProduto.nome, meuProduto.preco);


    return 0;
}
