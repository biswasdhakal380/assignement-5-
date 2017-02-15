#include <stdio.h>
#include <conio.h>
#include<string.h>
void main()
		   {
		   char n[10];
		   int i;
		   clrscr();
		   printf("enter any string:");
		   gets(n);
		   for(i=0;i<10;i++)
		   {
			if(n[i]=='i')
			{
				printf("\nthere is i in %d position of the given string\n",i+1);
			}
			}
		   getch();
		   }