#include<stdio.h>
#include<conio.h>
void result(int n)
{
int i,d=0,c;
for(i=2;i<=n;i++)
{
		c=n%i;
		if(c==0)
		{
			d++;
		 }

}
if(d==1)
{
	printf("it is prime ");
}
else
{
	printf("it is not prime");
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
