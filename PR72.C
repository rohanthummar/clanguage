#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d,e;
clrscr();
       printf("enter any number\n");
       scanf("%d",&a);
       printf("you have entered number is %d\n",a);
       scanf("%d",&b);
       printf("you have entered number is %d\n",b);
       scanf("%d",&c);
       printf("you have enter number is %d\n",c);
       scanf("%d",&d);
       printf("you have enter number is %d\n",d);
       scanf("%d",&e);
       printf("you have entered number is %d\n",e);


	if(a>b && a>c  && a>d && a>e)
       {
       printf("a\n");
       }
       else if(b>c && b>d && b>e)
       {
       printf("b\n");
       }
       else if(c>d && c>e)
       {
       printf("c\n");
       }
       else if(d>e)
       {
       printf("d\n");
	}
	else
	{
	printf("e\n");
	}

getch();
}

