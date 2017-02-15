#include<stdio.h>
#include<conio.h>
int r(int a)
{
	int rev,sum=0;
	while(a!=0)
	{
		sum=sum+(a%10);
		a=a/10;
	}
	return sum;
}
void main()
{
	int a;
	clrscr();
	scanf("%d",&a);
	printf("the sum of digit is:%d",r(a));
	getch();
}
