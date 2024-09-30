#include<stdio.h>
#include<conio.h>

int perimeterSquare(int value)
{
    return value*4;
}

int main()
{
    int side;
    printf("Enter the value of the side: ");
    scanf("%i",&side);
    printf("The perimeter of a square with side %i is %i",side,perimeterSquare(side));
    getch();
    return 0;
}
