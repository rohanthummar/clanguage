#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d;
clrscr();
	printf("enter any number");
	scanf("%d",&a);
	printf("entered number is %d\n",a);
	scanf("%d",&b);
	printf("entered number is %d\n",b);
	scanf("%d",&c);
	printf("entered number is %d\n",c);
	scanf("%d",&d);
	printf("entered number is %d\n",d);

if(a>b)
{
	 if(a>c)
	 {
		 if(a>d)
		 {
		 printf("a\n");
		 }
		 else
		 printf("d\n");
}
	 else
	 {
	    if(c>d)
	    {
	    printf("c\n");
	    }
	    else
	    {
	    printf("d\n");
	    }
	  }
 }
else
{

	 if(b>c)
	 {
	       if(b>d)
	       {
	       printf("b\n");
	       }
	       else
	       {
	       printf("d\n");
	       }
	 }

	 else
	 {
	    if(c>d)
       {
	    printf("c\n");
	    }
	    else
	    {
	    printf("d\n");
	    }
	}
      }
getch();
}