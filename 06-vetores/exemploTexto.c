#include<stdio.h>
#include<stdlib.h>
int main(int argc, char const *argv[])
{
    float notas[10];
    char texto1[4] = {'c','a','s','a'};
    char texto2[] = "Ola, mundo!";

    int tamanho = sizeof(texto2); //captura o tamanho do vetor

    printf("%s\n",texto2);
    printf("%i\n",tamanho);

    for(int i = 0; i < tamanho; i++){
        printf("%c\n",texto2[i]);
    }

    /* code */
    return 0;
}
