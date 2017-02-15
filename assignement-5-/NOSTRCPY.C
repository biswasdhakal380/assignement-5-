#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[5];
int i,j;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i=i+1)
{
	 b[i]=a[i];
}

printf("the copy of the string is:%s",b);
getch();
}