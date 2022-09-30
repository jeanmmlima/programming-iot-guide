#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
    float x,f = 65.5;
    float y;
    x = f/10.0;
    y = (int) (f/10.0);
    printf("x = %f\n",x);
    printf("y = %f\n",y);
    return 0;
}
