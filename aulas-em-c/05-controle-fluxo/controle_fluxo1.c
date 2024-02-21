#include <stdio.h>

int main()
{
    int x = 1;
    int y = 1;

    if(y == 0){
       //bloco de comandos - condição verdadeira
       print("Condição é verdadeira");
       if(x != 0){
            //bloco de comandos - condição verdadeira
           print("Condição é verdadeira");
       }
       else {
           //bloco de comandos condição falsa
           printf("Condição é falsa");
       }
   }
   else {
       //bloco de comandos condição falsa
       printf("Condição é falsa");
   }

    
    return 0;
}
