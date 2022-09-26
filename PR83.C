#include<stdio.h>
#include<conio.h>
void main()
{
char m,t,w,r,f,s,o;
clrscr();
	printf("enter all week name\n");
	scanf("%c %c %c %c %c %c %c",&m,&t,&w,&r,&f,&s,&o);
	printf("you have entered all week %c %c %c %c %c %c %c",m,t,w,r,f,s,o);
	switch(m)
	{
	case 'm':
	       printf("monday");break;
	case 't':
	       printf("tuesday");break;
	case 'w':
	       printf("wednesday");break;
	case 'r':
	       printf("thursday");break;
	case 'f':
	       printf("friday");break;
	case 's':
	       printf("saturday");break;
	case 'o':
	       printf("sunday");break;
}







getch();
}
