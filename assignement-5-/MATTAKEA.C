#include<stdio.h>
#include<conio.h>
void main()
{
int n[2][3],i,j;
clrscr();
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
	printf("enter matrix[%d][%d]:",i,j);
	scanf("%d",&n[i][j]);
	}
}
for(i=0;i<2;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d \t",n[i][j]);
	}
	printf("\n");
}
getch();
}