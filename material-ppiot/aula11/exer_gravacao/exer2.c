#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define NUM_SENSORES 5
#define NUM_LEITURAS 3


int main()
{
    float minhasLeituras[NUM_SENSORES][NUM_LEITURAS];

    //ler as temperaturas

    for (int i = 0; i < NUM_SENSORES; i++)
    {
        for (int j = 0; j < NUM_LEITURAS; j++)
        {
            minhasLeituras[i][j] = 0 + (float) (rand() % 500)/10.0;
        }
        
    }

    //exibir as temperaturas
    for (int i = 0; i < NUM_SENSORES; i++)
    {
        printf("Leituras do Sensor %d\n", i+1);
        for (int j = 0; j < NUM_LEITURAS; j++)
        {
            printf("Temperatura da leitura %d: %f ºC \n", j, minhasLeituras[i][j]);
        }
        
    }

    float medias[NUM_SENSORES];
    for (int i = 0; i < NUM_SENSORES; i++)
    {
        float soma = 0;
        for (int j = 0; j < NUM_LEITURAS; j++)
        {
            soma += minhasLeituras[i][j];
        }
        medias[i] = soma / 3;
        
    }

    for (int i = 0; i < NUM_SENSORES; i++)
    {
        printf("A média das temperaturas lidas pelo sensor %d: %f ºC\n", i+1, medias[i]);
    }
    
    
    

    return 0;
}
