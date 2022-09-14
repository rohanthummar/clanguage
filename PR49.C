#include<stdio.h>
#include<conio.h>
void main()
{
float a,b,sum,mul,div,sub,avg;
clrscr();
      printf("enter number is a\n");
      scanf("%f",&a);
      printf("you have entered number is %f\n",a);
      printf("enter number is b\n");
      scanf("%f",&b);
      printf("you have entered number is %f\n",b);
      sum=a+b;
      printf("you have enter number is %f+%f=%f\n",a,b,sum);
      mul=a*b;
      printf("you have enter number is %f*%f=%f\n",a,b,mul);
      div=a/b;
      printf("you have enter number is %f/%f=%f",a,b,div);
      avg=(a+b)*0.5;
      printf("you have enter number is (%f+%f)*0.5=%f",a,b,avg);
getch();
}




