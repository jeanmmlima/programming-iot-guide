#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main()
{
    int i;
    float temperatura;

    srand(time(0));

    for(i = 1; i <= 5; i++){
        //min 15 a max 30
        temperatura = 15 + (rand() % 150) / 10.0;

        printf("Temperatura no Sala %i é igual a: %.1f ºC\n",i,temperatura);

    }
    /* code */
    return 0;
}
