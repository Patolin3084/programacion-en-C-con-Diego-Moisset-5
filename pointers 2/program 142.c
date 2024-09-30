#include<stdio.h>
#include<conio.h>

int main()
{
    int x1,x2;
    int *pe;
    pe=&x1;
    *pe=100;
    pe=&x2;
    *pe=200;
    printf("First integer variable: %i \n",x1);
    printf("Second integer variable: %i \n",x2);
    getch();
    return 0;
}
