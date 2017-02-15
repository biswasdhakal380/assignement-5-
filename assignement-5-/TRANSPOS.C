#include<stdio.h>
#include<conio.h>
void main()
{

int a[3][3],i,j;
clrscr();
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("matrix[%d][%d]",i,j);
		sca
		nf("%d",&a[i][j]);
	}
}
printf("the matrix is\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",a[i][j]);
	}
	printf("\n");
}
printf("the transpose is\n");
for(i=0;i<3;i++)
{
	for(j=0;j<3;j++)
	{
		printf("%d\t",a[j][i]);
	}
	printf("\n");
}

getch();
}