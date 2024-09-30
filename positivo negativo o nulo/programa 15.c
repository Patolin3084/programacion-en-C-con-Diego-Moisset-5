#include<stdio.h>
#include<conio.h>

int main()
{
    int num;
    printf("Ingrese un valor:");
    scanf("%i", &num);
    if (num==0)
    {
        printf("Este valor es nulo");
    }
    else
    {
        if (num>0)
        {
            printf("Este valor es positivo");
        }
        else
        {
            printf("Este valor es negativo");
        }
    }
    getch();
    return 0;
}
