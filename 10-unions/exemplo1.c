#include <stdio.h>
#include <stdlib.h>
#include <string.h>

union minhaUniao
{
    short int x;
    unsigned char c;
};

int main(int argc, char const *argv[])
{
    union minhaUniao mu;

    mu.x = 1590;
    printf("%d\n",mu.x);
    printf("%c\n",mu.c);
    mu.c = 70;
    printf("%d\n",mu.x);
    printf("%c\n",mu.c);
    /* code */
    return 0;
}
