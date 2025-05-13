#include <stdio.h>

int main()
{
    int operacao;
    float numero1, numero2, resultado;

    printf("Escolha uma opção: 1 - Adição, 2 - Subtração, 3 - Multiplicação, 4 - Divisão\n");
    scanf("%i",&operacao);

    printf("Inserir primeiro numero: \n");
    scanf("%f",&numero1);

    printf("Inserir segundo numero: \n");
    scanf("%f",&numero2);

   switch(operacao){
    case 1:{
        resultado = numero1 + numero2;
        printf("O resultado da operação é: %f",resultado);
        break;
    }
    case 2:{
        resultado = numero1 - numero2;
        printf("O resultado da operação é: %f",resultado);
        break; 
    }
    case 3:{
        resultado = numero1 * numero2;
        printf("O resultado da operação é: %f",resultado);
        break;
    }
    case 4:{
        resultado = numero1 / numero2;
        printf("O resultado da operação é: %f",resultado);
        break;
    }
    default: {
        printf("A operação escolhida foi inválida!\n");
    }
   }
    return 0;
}
