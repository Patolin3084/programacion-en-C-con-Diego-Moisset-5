#include<stdio.h>
#include<conio.h>

struct product{
    int code;
    char description[41];
    float price;
};

void load(struct product *pprod)
{
    printf("Enter code: ");
    scanf("%i",&(*pprod).code);
    fflush(stdin);
    printf("Enter description: ");
    gets((*pprod).description);
    printf("Enter price: ");
    scanf("%f",&(*pprod).price);
}

void print(struct product prod)
{
    printf("Code: %i\n",prod.code);
    printf("Descrption: %s\n",prod.description);
    printf("Price: %0.2f",prod.price);
}

int main()
{
    struct product prod;
    load(&prod);
    print(prod);
    getch();
    return 0;
}
