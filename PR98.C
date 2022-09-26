#include<stdio.h>
#include<conio.h>
void main()
{
int r;
clrscr();
       r=1;
       do
       {
       if(r%2!=0)
       printf("%d\n",r);
       r++;
       } while(r<=10);
getch();
}
