#include <stdio.h>

int main()
{
    int minhaMatriz[3][3];

    /* minhaMatriz[0][0] = 10;
    minhaMatriz[0][1] = 20;
    minhaMatriz[0][2] = 30;
    minhaMatriz[0][3] = 40;

    minhaMatriz[1][0] = 10 * 10;
    minhaMatriz[1][1] = minhaMatriz[0][0] + 10;
    minhaMatriz[1][2] = minhaMatriz[0][2] - 5;
    minhaMatriz[1][3] = 40 / 2;
    
    minhaMatriz[2][0] = 100;
    minhaMatriz[2][1] = 200;
    minhaMatriz[2][2] = 300;
    minhaMatriz[2][3] = 400;

    minhaMatriz[3][0] = 1000;
    minhaMatriz[3][1] = 2000;
    minhaMatriz[3][2] = 3000;
    minhaMatriz[3][3] = 4000; */

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("Inserir o valor da matriz na linha %d e coluna %d\n", i, j);
            scanf("%d", &minhaMatriz[i][j]);
        }
    }

    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 3; j++){
            printf("\nO valor da matriz na posição linha %d e coluna %d eh: %d\n", i, j, minhaMatriz[i][j]);
        }
    }




    return 0;
}
