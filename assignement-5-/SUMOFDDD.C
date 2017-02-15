#include <stdio.h>
#include<conio.h>
int  sum(int a)
{
	int s=0;
	if(a>0)
	{
		s=s+a%10;
		s=s+sum(a/10);
	}
	return s;
}
void main()
{
	int num;
	clrscr();
	printf("enter a  number:");
	scanf("%d",&num);
	printf("\n the sum of digits  is %d",sum(num));
	getch();
}
