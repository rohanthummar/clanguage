#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,d; //maximum from 4 numbers
clrscr();
       printf("enter any number\n");
       scanf("%d",&a);
       printf("you have enter number is %d\n",a);
       scanf("%d",&b);
       printf("you have enter number is %d\n",b);
       scanf("%d",&c);
       printf("you have enter number is %d\n",c);
       scanf("%d",&d);
       printf("you have enter number is %d\n",d);


       if(a>b && a>c  && a>d)
       {
       printf("a\n");
       }
       else if(b>c && b>d)
       {
       printf("b\n");
       }
       else if(c>d)
       {
       printf("c\n");
       }
       else
       {
       printf("d\n");
	}
getch();
}