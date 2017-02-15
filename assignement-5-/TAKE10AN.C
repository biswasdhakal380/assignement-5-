#include<stdio.h>
#include<conio.h>
void main()
{
int n[10],i;
clrscr();
for(i=0;i<10;i++)
{
	scanf("%d",&n[i]);
}
for(i=0;i<10;i++)
{
	printf("the number is %d\n",n[i]);
}
getch();
}