#include <stdio.h>
#include<conio.h>
int  reverse(int a)
{
	int rev=0;
	if(a==1)
	{
		return a;
	}
	else
	{
		rev=((a%10)*10)+reverse(a/10);
		return rev;
	}

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
