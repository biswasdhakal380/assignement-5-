#include<stdio.h>
#include<conio.h>
void div()
{
	printf("divisible");
}
void nodiv()
{
	printf("not divisible");
}
void main()
{
	int a;
	scanf("%d",&a);
	if(a%5==0&&a%7==0)
	{
		div();
	}
	else
	{
		nodiv();
	}
	getch();
}
