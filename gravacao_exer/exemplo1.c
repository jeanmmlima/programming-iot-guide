#include <stdio.h>

int main()
{
    char palavra[] = "Programacao em C";

    for(int i = 0; palavra[i] != '\0'; i++){
        printf("%c", palavra[i]);
    }


    return 0;
}
