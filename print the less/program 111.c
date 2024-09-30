#include<stdio.h>
#include<conio.h>

void load(int vector[5])
{
    for(int x=0;x<5;x++)
    {
        printf("Enter a element: ");
        scanf("%i",&vector[x]);
    }
}

int menor(int vector[5])
{
    int men=vector[0];
    for(int x=1;x<5;x++)
    {
        if(vector[x]<men)
        {
            men=vector[x];
        }
    }
    return men;
}

void verificationRepeat(int vector[5],int men)
{
    int cant=0;
    for(int x=0;x<5;x++)
    {
        if(vector[x]==men)
        {
            cant++;
        }
    }
    if(cant==1)
    {
        printf("The minor element is NOT repeated within the vector");
    }
    else
    {
        printf("The minor element is repeated within the vector");
    }
}

void main()
{
    int vect[5];
    int men;
    load(vect);
    men=menor(vect);
    printf("The minor element of the vector is: %i\n",men);
    verificationRepeat(vect,men);
    getch();
    return 0;
}
