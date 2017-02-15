#include<stdio.h>
#include<conio.h>
void main()
{
int i,j;
int n[10];
float sum=0;
clrscr();
for(i=0;i<10;i++)
{
	scanf("%d",&n[i]);
}
for(j=0;j<10;j++)
{
	printf("the number is %d\n",n[j]);
	sum=sum+n[j];
}
printf("the sum is %f and the average is %f",sum,(sum/10));
getch();
}