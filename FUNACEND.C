#include<stdio.h>
#include<conio.h>
void output(int a[])
{
int i,j,temp;
for(i=0;i<10-1;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(a[i]>a[j])
		{
			temp=a[i];
			a[i]=a[j];
			a[j]=temp;
		}

	 }

}
for(i=0;i<10;i++)
{
	printf("%d\t",a[i]);
}
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
	printf("the numbers in accending are\n");
		output(a);
	getch();
}
