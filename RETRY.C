
#include <stdio.h>
#include<conio.h>

int rev=0;
int  reverse(int a)
{
	int rem;
	rem=a%10;
	rev=rev*10+rem;
	a=a/10;
	if(a==0)
	{
		return rev;
	}
	else
	{
		reverse(a);
	}
return rev;
}

void main()
{
	int num;
	clrscr();
	printf("enter a  number:");
	scanf("%d",&num);
	printf("\n the reverse is %d",reverse(num));
	getch();
}
