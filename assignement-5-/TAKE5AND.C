#include<stdio.h>
#include<conio.h>
void main()
{
int n[5],i;
clrscr();
for(i=0;i<5;i++)
{
	scanf("%d",&n[i]);
}
printf("the reverse are:\n");
for(i=4;i>=0;i--)
{
	printf("%d\n",n[i]);
}
getch();
}