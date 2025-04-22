#include <stdio.h>

int main()
{
    float temperatura = 60;

    do{

        printf("O valor atual da temperatuar é: %.2f ºC\n", temperatura);

        if(temperatura >= 50){
            printf("Temperatura maior que 50, está elevada!\n");
        }
       
        temperatura = temperatura - 1;
    } while (temperatura >= 40);

    return 0;
}

