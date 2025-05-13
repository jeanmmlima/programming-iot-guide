 #include <stdio.h>
 
 int main()
 {
    float resultado;
    int a, b;

    printf("Inserir a altura do triangulo\n");
    scanf("%i",&a);

    printf("Inserir a base do triangulo\n");
    scanf("%i",&b);

    resultado = ( (float) a * (b + 2)) / 2;

    printf("A area do triangulo retangulo e: %f", resultado);

    return 0;
 }
 