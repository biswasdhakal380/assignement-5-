   #include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10];
int i,j,count=0;
clrscr();
gets(a);
for(i=0;a[i]!='\0';i++)
{
	count+=1;
}
printf("the number of string length is:%d",count);
getch();
}