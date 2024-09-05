#include <stdio.h>

int main() {
    char letra_secreta = 'G';  // Letra que o usuário deve adivinhar
    char tentativa;

    // Primeira tentativa
    printf("Adivinhe a letra secreta: ");
    scanf(" %c", &tentativa);

    if (tentativa == letra_secreta) {
        printf("Parabéns! Você acertou na primeira tentativa!\n");
        return 0;  // Termina o programa se acertar
    }

    // Segunda tentativa
    printf("Errado! Tente novamente.\nAdivinhe a letra secreta: ");
    scanf(" %c", &tentativa);

    if (tentativa == letra_secreta) {
        printf("Parabéns! Você acertou na segunda tentativa!\n");
        return 0;  // Termina o programa se acertar
    }

    // Terceira tentativa
    printf("Errado! Tente novamente.\nAdivinhe a letra secreta: ");
    scanf(" %c", &tentativa);

    if (tentativa == letra_secreta) {
        printf("Parabéns! Você acertou na terceira tentativa!\n");
        return 0; // Termina o programa se acertar
    } 

    return 0; // Termina o programa  usuario nao acertou nenhuma das tentativas
}