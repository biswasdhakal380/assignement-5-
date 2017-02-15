#include<stdio.h>
#include<conio.h>
int div()
{
   int a=1;
   return a;
}
int nodiv()
{
   int a=0;
   return a;
}
void main()
{
	int n;
	char r;
	clrscr();
	scanf("%d",&n);
	if(n%2==0)
	{
		r=div();
	}
	else
	{
		r=nodiv();
	}
	if(r==1)
	{
		printf("it is even");
	}
	else
	{
		printf("it is odd");
	}
	getch();
}
