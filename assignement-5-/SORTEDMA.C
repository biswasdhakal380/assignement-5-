#include<stdio.h>
#include<conio.h>
void main()
{
int m,
numa[5],numb[5],numc[10],temp,j,i;
clrscr();

//scanf("%d",&n);
printf("enter in array one:\n");
for(i=0;i<5;i++)
{
	scanf("%d",&numa[i]);
}
for(i=0;i<4;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(numa[i]>numa[j])
		{
			temp=numa[i];
			numa[i]=numa[j];
			numa[j]=temp;
		}

	 }

}
for(i=0;i<5;i++)
{
	printf("%d\t",numa[i]);
}
printf("\n enter number in array 2:\n");
for(i=0;i<5;i++)
{
	scanf("%d",&numb[i]);
}
for(i=0;i<4;i++)
{
	for(j=i+1;j<5;j++)
	{
		if(numb[i]>numb[j])
		{
			temp=numb[i];
			numb[i]=numb[j];
			numb[j]=temp;
		}

	 }

}
for(i=0;i<5;i++)
{
	printf("%d\t",numb[i]);
}
printf("\nthe combination of both array in sorted is:\n");

for(i=0;i<5;i++)
{
	numc[i]=numa[i];
}
for(i=0;i<5;i++)
{
	m=i+5;
	numc[m]=numb[i];
}

for(i=0;i<9;i++)
{
	for(j=i+1;j<10;j++)
	{
		if(numc[i]>numc[j])
		{
			temp=numc[i];
			numc[i]=numc[j];
			numc[j]=temp;
		}

	 }

}
for(i=0;i<10;i++)
{
	printf("%d\t",numc[i]);
}
getch();
}