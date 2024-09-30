#include<stdio.h>
#include<conio.h>
#include<string.h>

struct product {
    int code;
    char description[41];
    float price;
};//obligatorio el punto y coma

void print(struct product p)
{
    printf("Product code: %i\n",p.code);
    printf("Description: %s\n",p.description);
    printf("Price: %0.2f",p.price);
}
int main()
{
    struct product pro;/*={1,"oranges",12.50};*/
    pro.code=1;
    strcpy(pro.description,"oranges");
    pro.price=15.50;
    print(pro);
    getch();
    return 0;
}
