#include<stdio.h>
#include<conio.h>

void load(int *pe1,int *pe2)
{
    *pe1=100;
    *pe2=200;
}

int main()
{
    int x1,x2;
    load(&x1,&x2);
    printf("%i   %i",x1,x2);
    getch();
    return 0;
}
