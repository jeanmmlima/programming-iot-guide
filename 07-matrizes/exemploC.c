#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[3][4];
    //escrevendo elementos na matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            mat[i][j] = 1;
        }
    }
    //imprimindo linha por linha da matriz
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%i ",mat[i][j]);
        }
        printf("\n");
    }
    return 0;
}