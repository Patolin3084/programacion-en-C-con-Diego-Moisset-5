#include<stdio.h>
#include<conio.h>

int main()
{
    int n, x;
    float altura, altTotal, altProm;
    x=1;
    altTotal=0;
    printf("Cuantas alturas quiere ingresar:");
    scanf("%i", &n);
    while(x<=n)
    {
        printf("Ingrese altura de la persona:");
        scanf("%f",&altura);
        altTotal=altTotal+altura;
        x=x+1;
    }
    altProm=altTotal/n;
    printf("El promedio de altura es:");
    printf("%f", altProm);
    getch();
    return 0;
}
