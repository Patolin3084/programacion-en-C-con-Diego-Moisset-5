#include<stdio.h>
#include<conio.h>

struct point{
    int x;
    int y;
};

struct point load()
{
    struct point coor;
    printf("Enter the coordinate for X: ");
    scanf("%i",&coor.x);
    printf("Enter the coordinate for Y: ");
    scanf("%i",&coor.y);
    return coor;
};

void print(struct point coor)
{
    if(coor.x>0 && coor.y>0)
    {
        printf("The coordinate (%i,%i) is in the first cuadrant",coor.x,coor.y);
    }
    else
    {
        if(coor.x<0 && coor.y>0)
        {
            printf("The coordinate (%i,%i) is in the second cuadrant",coor.x,coor.y);
        }
        else
        {
            if(coor.x<0 && coor.y<0)
            {
                printf("The coordinate (%i,%i) is in the third cuadrant",coor.x,coor.y);
            }
            else
            {
                if(coor.x>0 && coor.y<0)
                {
                    printf("The coordinate (%i,%i) is in the fourth cuadrant",coor.x,coor.y);
                }
            }
        }
    }
    printf("\n");
}

int main()
{
    struct point coor1,coor2,coor3;
    coor1=load();
    coor2=load();
    coor3=load();
    print(coor1);
    print(coor2);
    print(coor3);
    getch();
    return 0;
}
