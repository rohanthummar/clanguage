#include<stdio.h>
#include<conio.h>
void main()
{
char j;
clrscr();
	printf("enter months name\n");
	scanf("%c",&j);
	printf("you have enter month name as %c\n",j);
	switch(j)
{
	case 'j':
	      printf("january");break;

	case 'f':
	      printf("february");break;
	case 'm':
	      printf("march");break;
	case 'a':
	      printf("april");break;
	case 'r':
	      printf("may");break;
	case 'e':
	      printf("june");break;
	case 'c':
	      printf("july");break;
	case 'h':
	      printf("august");break;
	case 's':
	      printf("september");break;
	case 'o':
	      printf("october");break;
	case 'n':
	      printf("november");break;
	case 'd':
	      printf("december");break;
	default :
	      printf("no match");
}

getch();
}










