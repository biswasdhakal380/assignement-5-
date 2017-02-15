

#include <stdio.h>
#include<conio.h>
int  sum(int a)
{
	int s=0;
	if(a==1)
	{
		return a;
	}
	else
	{
		s=a+sum(a-1);
		return s;
	}

}
void main()
{
	int num=10;
	clrscr();
	printf("\n the sum of 10 natural number  is %d",sum(num));
	getch();
}
