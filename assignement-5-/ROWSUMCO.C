#include<stdio.h>
#include<conio.h>
void main()
{
int f[5][5],m,n,i,j,r1sum=0,r2sum=0,r3sum=0,c1sum=0,c2sum=0,c3sum=0;
clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
	printf("enter the matrix[%d][%d]:",i,j);
	scanf("%d",&f[i][j]);
	}
}
i=0;
for(j=0;j<3;j++)
{
	r1sum+=f[i][j];
}
i=1;
for(j=0;j<3;j++)
{
	r2sum+=f[i][j];
}
i=2;
for(j=0;j<3;j++)
{
	r3sum+=f[i][j];
}
j=0;
for(i=0;i<3;i++)
{
	c1sum+=f[i][j];
}
j=1;
for(i=0;i<3;i++)
{
	c2sum+=f[i][j];
}
j=2;
for(i=0;i<3;i++)
{
	c3sum+=f[i][j];
}
printf("\nthe first row sum is:%d",r1sum);
printf("\nthe second row sum is:%d",r2sum);
printf("\nthe third row sum is:%d",r3sum);
printf("\nthe first column sum is:%d",c1sum);
printf("\nthe second column sum is:%d",c2sum);
printf("\nthe third column sum is:%d",c3sum);
getch();
}
