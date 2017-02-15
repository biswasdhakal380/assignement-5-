#include<stdio.h>
#include<conio.h>
void main()
{
int n[10],r,j,i,so=0,se=0,co=0,ce=0;
clrscr();
for(i=0;i<10;i++)
{
	scanf("%d",&n[i]);
}
for(j=0;j<10;j++)
{
	r=n[j]%2;
	if(r==0)
	{
		ce=ce+1;
		se=se+n[j];
	}
	else
	{
		co=co+1;
		so=so+n[j];
	 }
}
printf("the sum of evens is %d and number of even are %d\n the sum of odds  is %d and number of odds are %d",se,ce,so,co);
getch();
}