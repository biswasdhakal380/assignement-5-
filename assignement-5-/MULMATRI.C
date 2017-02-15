#include<stdio.h>
#include<conio.h>
void main()
{
int sum,f[2][3],mul[2][3],i,j,k,s[2][3],m,n,a,b;
clrscr();
printf("enter value of m:");
scanf("%d",&m);
printf("enter vakue of n:");
scanf("%d",&n);
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
	{
	printf("enter first matrix[%d][%d]:",i,j);
	scanf("%d",&f[i][j]);
	}
}
printf("enter value of m:");
scanf("%d",&a);
printf("enter vakue of n:");
scanf("%d",&b);
for(i=0;i<a;i++)
{
	for(j=0;j<b;j++)
	{
		printf("enter second matrix[%d][%d]",i,j);
		scanf("%d",&s[i][j]);
	}
}
if(n==a)
{
sum=0;
for(i=0;i<m;i++)
{
	for(j=0;j<n;j++)
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
	for(j=0;j<3;j++)
	{
		printf("%d\t",mul[i][j]);
	}
	 printf("\n");
}
}
else
{
printf("the matrix cannot be multiplied");
}
getch();
}