#include <stdio.h>

int somar(int a, int b){

    int soma = a + b;
    return soma;

}

int main()
{
    int x = 50, y = 20;
    
    int soma = somar(100,20);

    printf("A soma é: %d", soma);
    
    return 0;
}
