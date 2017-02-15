#include<stdio.h>
#include<conio.h>
void main()
{
int n[10],sum=0,j,i;
clrscr();
for(i=0;i<10;i++)
{
	scanf("%d",&n[i]);
}
for(j=0;j<10;j++)
{
	sum=sum+n[j];
}
printf("the sum is %d",sum);
getch();
}