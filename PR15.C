#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,sum,mul,sub;
float div;
clrscr();
	  printf("enter any integer");
	  scanf("%d %d",&a,&b);
	  sum=a+b;
	  div=b/a;
	  mul=a*b;
	  sub=a-b;
	  printf("%d+%d=%d\n",a,b,sum);
	  printf("%d/%d=%f\n",b,a,div);
	  printf("%d*%d=%d\n",a,b,mul);
	  printf("%d-%d=%d\n",a,b,sub);
getch();
}
