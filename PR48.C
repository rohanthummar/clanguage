#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,mul,div,sub,avg;
clrscr();
	printf("enter  number is a \n");
	scanf("%d",&a);
	printf("you have enter number is %d\n",a);
	printf("enter number is b\n");
	scanf("%d",&b);
	printf("you have enter number is %d\n",b);
	sum=a+b;
	printf("you have enter number is %d=%d+%d\n",sum,a,b);
	mul=a*b;
	printf("you have enter number is %d=%d*%d\n",mul,a,b);
	div=a/b;
	printf("you have entered number is %d/%d=%d\n",a,b,div);
	sub=a-b;
	printf("you have enter number is %d-%d=%d\n",a,b,sub);
	avg=(a+b)*0.5;
	printf("you have enter number is %d+%d*0.5=%d\n",a,b,avg);


getch();
}