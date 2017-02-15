#include<stdio.h>
#include<conio.h>
int
 r(int a)
{
	int rev=0;
	while(a!=0)
	{
		rev=rev*10;
		rev=rev+(a%10);
		a=a/10;
	}
	return rev;
}
void main()
{
	int a;
	clrscr();
	scanf("%d",&a);
	if(a==r(a))
	{
		printf("it is palindrome");
	}
	else
	{
		printf("it is not palindrome");
	}
	getch();
}
