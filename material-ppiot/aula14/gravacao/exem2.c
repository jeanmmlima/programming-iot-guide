#include <stdio.h>

int main() {
    int idade = 25;
    int *ptr;         // declara um ponteiro para inteiro

    ptr = &idade;     // armazena o endereço da variável 'idade' no ponteiro 'ptr'

    printf("Valor da variável idade: %d\n", idade);       // imprime 25
    printf("Endereço de idade: %p\n", &idade);            // imprime o endereço de idade
    printf("Conteúdo de ptr (endereço): %p\n", ptr);      // imprime o mesmo endereço de idade
    printf("Valor apontado por ptr: %d\n", *ptr);         // imprime 25 (conteúdo do endereço)
    
    *ptr = 30;        // altera o valor da variável idade via ponteiro

    printf("Novo valor de idade: %d\n", idade);           // imprime 30
    return 0;
}