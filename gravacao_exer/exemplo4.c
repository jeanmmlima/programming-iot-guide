#include <stdio.h>
#include <string.h>

int main()
{
    
    char palavra[] = "Palavra!";

    int tamanhoString = strlen(palavra);

    printf("A string %s tem %i caracteres\n", palavra, tamanhoString);

    char saudacao[] = "Ola!";
    char novaSaudacao[20];

    strcpy(novaSaudacao,saudacao);

    printf("A nova saudacao é %s\n", novaSaudacao);

    char parte1[20] = "Ola, ";
    char parte2[] = "mundo!" ;

    strcat(parte1,parte2);

    printf("%s\n", parte1);

    return 0;
}
