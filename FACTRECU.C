#include <stdio.h>
#include<conio.h>
int  factorial(int a)
{
	int fact=0;
	if(a==1)
	{
		return a;
	}
	else
	{
		fact=a*factorial(a-1);
		return fact;
	}

}
void main()
{
	int num;
	clrscr();
	printf("enter a  number:");
	scanf("%d",&num);
	printf("\n the factorial is %d",factorial(num));
	getch();
}
