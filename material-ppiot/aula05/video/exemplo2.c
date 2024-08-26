#include <stdio.h>
#include <math.h>

int main()
{
    float x1, x2, y1, y2, distancia;

    printf("Informe a coordenadra x do ponto 1: \n");
    scanf("%f", &x1);

    printf("Informe a coordenadra y do ponto 1: \n");
    scanf("%f", &y1);

    printf("Informe a coordenadra x do ponto 2: \n");
    scanf("%f", &x2);

    printf("Informe a coordenadra y do ponto 2: \n");
    scanf("%f", &y2);

    distancia = sqrt( pow((x2-x1),2) + pow((y2-y1),2) );

    printf("A distancia eh: %f", distancia) ;
    

    return 0;
    
}
