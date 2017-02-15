#include<stdio.h>
#include<conio.h>
void main()
{
int sum,f[2][2],mul[2][2],i,j,k,s[2][2],m,n,a,b;
clrscr();
printf("enter 1st matrix\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
	printf("enter first matrix[%d][%d]:",i,j);
	scanf("%d",&f[i][j]);
	}
}
printf("enter 2nd matrix\n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("enter second matrix[%d][%d]",i,j);
		scanf("%d",&s[i][j]);
	}
}

sum=0;
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		for(k=0;k<2;k++)
		{
			sum+=f[i][j]*s[k][j];
		}
		mul[i][j]=sum;
		sum=0;

	}
}
printf("\n\nmatrix multiplication \n");
for(i=0;i<2;i++)
{
	for(j=0;j<2;j++)
	{
		printf("%d\t",mul[i][j]);
	}
	 printf("\n");
}
getch();
}
