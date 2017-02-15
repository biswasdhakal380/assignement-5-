#include<stdio.h>
#include<conio.h>
int result(int n,int p)
{
	int re=1,i;
	for(i=1;i<=p;i++)
	{
		re=re*n;
	}
	return re;
}
void main()
{
	int num,power;
	clrscr();
	printf("enter the number:");
	scanf("%d",&num);
	printf("enter the power:");
	scanf("%d",&power);
	printf("the result is %d",result(num,power));
	getch();
}
