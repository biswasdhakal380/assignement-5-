#include <stdio.h>
#include<conio.h>
int  result(int a,int b)
{
	int re=0;
	if(b==1)
	{
		return a;
	}
	else
	{
		re=a*result(a,b-1);
	 return re;
	 }
}
void main()
{
	int num,po;
	clrscr();
	printf("enter a  number:");
	scanf("%d",&num);
	printf("\nenter the power:");
	scanf("%d",&po);
	printf("\n the result  is %d",result(num,po));
	getch();
}
