#include<stdio.h>
#include<conio.h>

 int largo(char *string)
 {
     int cant=0;
     while(*string!='\0')
     {
         cant++;
         string++;
     }
     return cant;
 }

 int main()
 {
     char name[10]="Marcos";
     printf("The name %s has %i caracters.",name,largo(name));
     getch();
     return 0;
 }
