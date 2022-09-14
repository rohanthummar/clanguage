#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum;
int c,d,mul;
int e,f,div;
int g,h,sub;
clrscr();
	printf("enter any integer");
	scanf("%d %d",&a,&b);
	sum=a+b;
	printf("%d+ %d=%d\n",a,b,sum);
	scanf("%d %d",&c,&d);
	mul=c*d;
	printf("%d*%d=%d\n",c,d,mul);
	scanf("%d %d",&e,&f);
	div=e/f;
	printf("%d/%d=%d\n",e,f,div);
	scanf("%d %d",&g,&h);
	sub=g-h;
	printf("%d-%d=%d\n",g,h,sub);



getch();
}
