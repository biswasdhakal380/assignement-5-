#include<stdio.h>
#include<conio.h>
void result()
{
int i,d=0,c,n;
for(n=2;n<=500;n++)
{
	c=0,d=0;
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
		printf("%d is prime\n ",n);
	}
}
}
void main()
{
	clrscr();
	result();
	getch();
}
