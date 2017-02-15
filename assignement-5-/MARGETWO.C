#include<stdio.h>
#include<conio.h>
void main()
{
int n[5],m[5],k[10],j,i;
clrscr();
printf("enter the values in first array:\n");
for(i=0;i<5;i++)
{
	scanf("%d",&n[i]);
}
printf("enter the values un second array:\n");
for(i=0;i<5;i++)
{
	scanf("%d",&m[i]);
}
for(j=0;j<5;j++)
{
	k[j]=n[j];
}
for(j=5;j<10;j++)
{
	k[j]=m[j-5];
}
printf("the values in 3rd array are:\n");
for(j=0;j<10;j++)
{
	printf("%d\n",k[j]);
}
getch();
}