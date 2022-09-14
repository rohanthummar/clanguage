#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,sub,mul,div;
 clrscr();
	 printf("enter value of a");
	 scanf("%d",&a);
	 printf("you have entered value of a is %d\n",a);
	 printf("enter value of b");
	 scanf("%d",&b);
	 printf("you have enetred value of b is %d\n",b);
	 sum=a+b;
	 sub=a-b;
	 mul=a*b;
	 div=a/b;
	 printf("you have enter the value of a and b is %d+%d=%d\n",a,b,sum);
	 printf("you have enter the value of a and b is %d-%d=%d\n",a,b,sub);
	 printf("you have enter the value of a and b is %d*%d=%d\n",a,b,mul);
	 printf("you have enter the value of a and b is %d/%d=%d\n",a,b,div);
getch();
}
