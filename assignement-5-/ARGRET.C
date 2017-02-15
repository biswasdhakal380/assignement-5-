#include<stdio.h>
#include<conio.h>
int div(int a,int b)
{
   int sum=a+b;
   return sum;
}
void main()
{
	int a,sum,b;
	clrscr();
	scanf("%d%d",&a,&b);
	sum=div(a,b);
	printf(" the sum is %d",sum);
	getch();
}

