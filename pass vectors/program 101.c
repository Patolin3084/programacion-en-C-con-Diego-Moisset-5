#include<stdio.h>
#include<conio.h>

void load(int vec[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Enter element: ");
        scanf("%i",&vec[x]);
    }
}

void print(int vec[5])
{
    printf("Full vector content: \n");
    for(int x=0;x<5;x++)
    {
        printf("%i ",vec[x]);
    }
}

int main()
{
    int vector[5];
    load(vector);
    print(vector);
    getch();
    return 0;
}
