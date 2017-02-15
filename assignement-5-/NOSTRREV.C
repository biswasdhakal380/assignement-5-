#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50],b[50];
int i,j,c=0;
clrscr();
gets(a);
c=strlen(a);
for(i=0;a[i]!='\0';i++)
{
	c= c-1;
	b[c]=a[i];
}
printf("the reverse of string is:%s",b);
getch();
}