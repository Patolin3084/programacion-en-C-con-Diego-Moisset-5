#include<stdio.h>
#include<conio.h>

int main()
{
    int value1=10;
    int value2=20;
    int *pe;
    pe=&value1;
    printf("Lo apuntado por 'pe' es: %i\n",*pe); //10
    printf("La direccion que almacena 'pe' es: %p\n",pe);
    pe=&value2;
    printf("Lo apuntado por 'pe' es: %i\n",*pe); //20
    printf("La direccion que almacena 'pe' es: %p\n",pe);
    getch();
    return 0;
}
