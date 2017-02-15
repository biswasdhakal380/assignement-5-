#include<stdio.h>
#include<conio.h>
void result(int n)
{
	int i,c;
	for(i=1;i<=n;i++)
	{
		c=n%i;
		if(c==0)
		{
			printf("%d is the divisor of %d\n",i,n);
		 }

	}

}
void main()
{
	int n;
	clrscr();
	scanf("%d",&n);
	result(n);
	getch();
}
