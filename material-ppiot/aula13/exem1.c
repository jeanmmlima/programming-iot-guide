#include <stdio.h>
#include <string.h>

// Estrutura (definindo o tipo)
struct Produto
{
    int codigo;
    char nome[50];
    float preco;
};

int main()
{
    // Variável (criando uma instância)
    struct Produto meuProduto;

    // Atribuindo valores
    meuProduto.codigo = 1;
    strcpy(meuProduto.nome, "Mouse");
    meuProduto.preco = 49.90;

    printf("Dados do produto:\n");
    printf("Codigo: %i, Nome: %s, Preço: R$ %.2f\n", meuProduto.codigo, meuProduto.nome, meuProduto.preco);

    return 0;

}
