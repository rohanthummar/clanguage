#include<stdio.h>
#include<conio.h>
void main()
{
int a,b;
clrscr();
	printf("enter any number \n");
	scanf("%d",&a);
	printf("you have enter number is %d\n",a);
	scanf("%d",&b);
	printf("you have enter number is %d\n",b);
	(a>b)?printf("%d",a):printf("%d",b);
getch();
}