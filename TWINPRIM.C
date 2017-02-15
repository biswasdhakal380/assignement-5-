#include<stdio.h>
#include<conio.h>
int result(int n)
{
	int c=0,d=0,i;
	for(i=1;i<=n;i++)
	{
		c=n%i;
		if(c==0)
		{
			d++;
		 }

	}
	if(d==2)
	{
		return d;
	}
	return d;
}

void main()
{
	int i;
	clrscr();
	for(i=3;i<=500;i=i+2)
	{
		if(result(i)==result(i+2))
		{
			printf("\n%d\t%d\n",i,i+2);
		}

	}
	getch();
}
