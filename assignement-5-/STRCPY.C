#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[10],b[5];
int i,j;
clrscr();
gets(a);
strcpy(b,a);
printf("the copy of the string is:%s",b);
getch();
}