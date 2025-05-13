#include <stdio.h>

/*
Imagine um outro cenário no qual você foi desafiado a implementar um programa que verifica o 
acesso de usuários em um evento. O usuário só poderá entrar se tiver o ingresso OU se estiver na 
lista VIP E for maior de idade. Percebeu que temos uma expressão lógica aí? Tente montar a expressão
 antes de codificar! Vamos para o código.*/

int main()
{   
    int terIngresso = 0;
    int estarNaListaVIP = 1;
    int idade = 16;
    int resultado;

    resultado = terIngresso || (estarNaListaVIP && idade >= 18);

    printf("Acesso o evento? %i \n", resultado);
    
    return 0;
}
