#include<stdio.h>

int main()
{
    int lado;
    int perimetro;
    printf("Ingrese el valor del lado del cuadrado:");
    scanf("%i",&lado);
    perimetro=lado*4;
    printf("El valor del perimetro es:");
    printf("%i",perimetro);
    getch();
    return 0;
}
