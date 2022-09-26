#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,rhn;
clrscr();
	printf("enter any number \n");
	scanf("%d",&a);
	printf("you have enter number is %d\n",a);
	scanf("%d",&b);
	printf("you have enter number is %d\n",b);
	scanf("%d",&c);
	printf("you have enter number is %d\n",c);

	if(a>b)
	{
		if(a>c)
		{rhn=a;
		}
		else
		{
		rhn=c;
		}
	}
	else
	{
	   if(b>c)
	   {
	   rhn=b;
	   }
	   else
	   {
	   rhn=c;
	   }
	 }

	 printf("%d is maxm\n",rhn);
getch();
}














