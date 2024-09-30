#include<stdio.h>

float main()
{
    float precio, cantidad, abonar;
    printf("Ingrese el precio del articulo:");
    scanf("%f",&precio);
    printf("Ingrese la cantidad de articulos:");
    scanf("%f",&cantidad);
    abonar=precio*cantidad;
    printf("El costo a abonar es:");
    printf("%f",abonar);
    getch ();
    return 0;

}
