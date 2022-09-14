#include<stdio.h>
#include<conio.h>
void main()
{
const float p=3.14;
int r;
float area;
clrscr();
	printf("value of %.2f",p);
	scanf("%d",&r);
	area=p*r*r;
	printf("you have entered value of p and r is %f",area);
getch();
}