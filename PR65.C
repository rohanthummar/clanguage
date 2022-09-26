#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();    //print given number is minimum or maximun
       printf("enter any number");
       scanf("%d",&a);
       printf("you have entered number is %d\n",a);
       scanf("%d",&b);
       printf("you have entered number is %d\n",b);
       (a<b)?printf("minimun value is %d",a):printf("minimum value is %d",b);

getch();
}