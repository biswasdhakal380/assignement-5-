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
printf("the concated form is:%s",strcat(a,b));
getch();
}