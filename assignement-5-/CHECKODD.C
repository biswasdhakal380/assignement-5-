#include<stdio.h>
#include<conio.h>
void main()
{
int n[10],r,j,i,so=0,se=0;
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
		printf("%d is even\n",n[j]);
		se=se+n[j];
	}
	else
	{
		printf("%d is odd\n",n[j]);
		so=so+n[j];
	 }
}
printf("the sum of evens is %d, the sum of odds  is %d",se,so);
getch();
}