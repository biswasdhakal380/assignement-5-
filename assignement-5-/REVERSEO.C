#include<stdio.h>
#include<conio.h>
void main()
{
int n[5],i,how;
clrscr();
printf("how many numbers you want to store:");
scanf("%d",&how);
for(i=0;i<how;i++)
{
	scanf("%d",&n[i]);
}
printf("the reverse are:\n");
for(i=how-1;i>=0;i--)
{
	printf("%d\n",n[i]);
}
getch();
}