#include<stdio.h>
#include<stdlib.h>

int main(){
    int mat[3][4] = {{1,2,3,4}, {5,6, 7,8}, {9,10, 11, 12}};
    //imprimindo elemento por elemento 
    for(int i = 0; i < 3; i++){
        for(int j = 0; j < 4; j++){
            printf("%i\n",mat[i][j]);
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