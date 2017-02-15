#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[50],c[25];
int i,j;
clrscr();
gets(a);
gets(b);
if(strcmp(a,b)==0)
{
	printf("they are same");
}
else
printf("they are not same") ;
getch();
}