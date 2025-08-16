#include <stdio.h>
#include <stdlib.h>

int main()
{
    int linhas = 10, colunas = 4;
    int **matriz;

    matriz = (int**) malloc(linhas * sizeof(int*));

    for (int i = 0; i < linhas; i++)
    {
        matriz[i] = (int*) malloc(colunas * sizeof(int));
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            matriz[i][j] = (i+1)*(j+1);
        }
        
    }

    for (int i = 0; i < linhas; i++)
    {
        for (int j = 0; j < colunas; j++)
        {
            printf("%i ", matriz[i][j]);
        }
        printf("\n");
        
    }

    for (int i = 0; i < linhas; i++)
    {
        free(matriz[i]);
    }

    free(matriz);
    
    
    

    return 0;
}
