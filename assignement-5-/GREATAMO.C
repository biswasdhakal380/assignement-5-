#include<stdio.h>
#include<conio.h>
void main()
{
int n[10],max,j,i,min;
clrscr();
for(i=0;i<10;i++)
{
	scanf("%d",&n[i]);
}
max=n[0];
min=n[0];
for(j=1;j<10;j++)
{
	if(n[j]>max)
	{
		max=n[j];
	}
	if(n[j]<min)
	{
		min=n[j];
	 }
}
printf("the max is %d, the minumum is %d",max,min);
getch();
}