#include <stdio.h>

char obterConceito(float nota){

    if(nota >= 90){
        return 'A';
    } else if(nota >= 80){
        return 'B';
    } else if(nota >= 70){
        return 'C';
    } else if(nota >= 60){
        return 'D';
    } else {
        return 'E';
    }

}

int main()
{
    float minhaNota;
    printf("Inserir a sua nota para saber seu conceito: \n");
    scanf("%f",&minhaNota);

    char meuConceito = obterConceito(minhaNota);

    printf("O seu conceito foi: %c\n", meuConceito);
    return 0;
}
