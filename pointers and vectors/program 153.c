#include<stdio.h>
#include<conio.h>
#define TAMANO 5

void load(float *p)
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("Enter the element: ");
        scanf("%f",&p[r]);
    }
}

void print(float *p)
{
    for(int r=0;r<TAMANO;r++)
    {
        printf("%0.2f\n",p[r]);
    }
}

int main()
{
    float vec[TAMANO];
    load(vec);
    print(vec);
    getch();
    return 0;
}

