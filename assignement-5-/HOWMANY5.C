#include<stdio.h>
#include<conio.h>
void main()
{
int n[10],sum=0,j,i;
clrscr();
for(i=0;i<10;i++)
{
	scanf("%d",&n[i]);
}
for(j=0;j<10;j++)
{
	if(n[j]==50)
	{
		sum=sum+1;
	}
}
printf("there is %d 50  in the ARRAY",sum);
getch();
}