#include<stdio.h>
#include<conio.h>

int main()
{
    int x, suma, valor, promedio;
    x=1;
    suma=0;
    while (x<=10)
    {
        printf("Ingrese un valor:");
        scanf("%i", &valor);
        suma=suma+valor;
        x=x+1;
    }
    promedio=suma/10;
    printf("la suma de los 10 valores es:");
    printf("%i", suma);
    printf("\n");
    printf("El promedio es:");
    printf("%i", promedio);
    getch();
    return 0;
}
