#include<stdio.h>
#include<conio.h>
void main()
{
int n,l,a=2,b,c,d;
clrscr();
printf("enter a number to check prime upto :");
scanf("%d",&n);
do
{
	c=0,b=1,d=0;
	do
	{
		c=a%b;
		if(c==0)
		{
			d++;
		 }
		b++;
	}while(b<=a);
if(d==2)
{
	printf("%d\n",a);
}
a++;
}while(a<=n);
getch();
}