#include<stdio.h>
#include<conio.h>
void main()
{
char m;
clrscr();
       printf("enter week name ");
       scanf("%c"&m);
       printf("you have enter monday as %c",m);

       switch(m)
{
   case 'm'
   printf("monday");break;
   case 't'
   printf("tuesday");break;
   case 'w'
   printf("wednesday");break;
   case 'a'
   printf("thursday");break;
   case 'f'
   printf("friday");break;
   case 's'
   printf("saturday");break;
   case 'r'
   printf("sunday");break;
}

















getch();
}