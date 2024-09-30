#include<stdio.h>
#include<conio.h>

void load(int matrix[3][4])
{
    for(int r=0;r<3;r++)
    {
        for(int c=0;c<4;c++)
        {
            printf("Enter the element:");
            scanf("%i",&matrix[r][c]);
        }
    }
}

void print(int matrix[3][4])
{
     for(int r=0;r<3;r++)
    {
        for(int c=0;c<4;c++)
        {
            printf("%i  ",matrix[r][c]);
        }
        printf("\n");
    }
}

void firstRow(int matrix[3][4])
{
    for(int c=0;c<4;c++)
    {
        printf("%i  ",matrix[0][c]);
    }
    printf("\n");
}

void lastRow(int matrix[3][4])
{
    for(int c=0;c<4;c++)
    {
        printf("%i ",matrix[2][c]);
    }
    printf("\n");
}

void firstColumn(int matrix[3][4])
{
    for(int r=0;r<3;r++)
    {
        printf("%i ",matrix[r][0]);
    }
    printf("\n");
}

void main()
{
    int matrix[3][4];
    load(matrix);
    print(matrix);
    printf("Elements of the first row \n");
    firstRow(matrix);
    printf("Elements of the last row \n");
    lastRow(matrix);
    printf("Elements of the first column \n");
    firstColumn(matrix);
    getch();
    return 0;
}
