#include<stdio.h>
#include<conio.h>
void output(int a)
{

		printf("%d\n",a);

}

void main()
{
	int a[10],i;
	clrscr();
	printf("enter numbers in array:\n");
	for(i=0;i<10;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("the numbers are:\n");
	for(i=0;i<10;i++)
	{
		output(a[i]);
	}

	getch();
}
