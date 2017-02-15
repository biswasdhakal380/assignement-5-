#include <stdio.h>
#include<conio.h>
int  reverse(int a)
{
	int rev;
	if(a<0)
	{
		return 0;
	}
	else if(a>=1)
	{
		return a;
	}
	else
	{
		rev=rev*10+a%10+reverse(a/10);
	return rev;
	}
}
void main()
{
	int num;
	clrscr();
	printf("enter a  number:");
	scanf("%d",&num);
	printf("\n the reverse  is %d",reverse(num));
	getch();
}
