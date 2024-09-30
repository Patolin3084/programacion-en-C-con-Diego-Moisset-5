#include<stdio.h>
#include<conio.h>

void load(char product[5][41],float price[5])
{
    for(int r=0;r<5;r++)
    {
        printf("Enter a product: ");
        gets(product[r]);
        printf("Enter the price: ");
        scanf("%f",&price[r]);
        fflush(stdin);
    }
}

void higherPrice(float price[5])
{
    int cant=0;
    for(int r=1;r<5;r++)
    {
        if(price[r]>price[0])
        {
            cant++;
        }
    }
    printf("\n%i products are more expensive than the first",cant);
}

void print(char product[5][41],float price[5])
{
    for(int r=0;r<5;r++)
    {
        printf("Product %s - Price %0.2f\n",product[r],price[r]);
    }
}

void main()
{
    char product[5][41];
    int price[5];
    load(product,price);
    print(product,price);
    higherPrice(price);
    getch();
    return 0;
}
