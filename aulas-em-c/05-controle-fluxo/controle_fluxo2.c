#include <stdio.h>

int main()
{
    int operacao = 1;
    int a = 10;
    int b = 2;

    if (operacao == 1)
    {
        print("%d\n", a + b);
    }
    else if (operacao == 2)
    {
        print("%d\n", a - b);
    }
    else if (operacao == 3)
    {
        print("%d\n", a * b);
    }
    else if (operacao == 4)
    {
        print("%d\n", a / b);
    }
    else
    {
        print("Operação inválida\n");
    }
    return 0;
}
