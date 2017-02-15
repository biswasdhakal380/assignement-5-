#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[50];
int i,j;
clrscr();
for(i=0;i<20;i++)
{
	a[i]=getchar();
}
printf("the output is:\n");
for(j=0;j<20;j++)
{
	putchar(a[j]);

}
getch();
}