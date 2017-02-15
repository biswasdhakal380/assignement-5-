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
for(i=0;a[i]!='\0';i=i+1)
{
	 c[i]=a[i];
}
for(j=0;b[j]!='\0';j++)
{
	 c[i+j]=b[j];
}
printf("the concated form is:%s",c);
getch();
}