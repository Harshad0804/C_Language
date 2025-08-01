#include<stdio.h>
#include<conio.h>

void main()
{
	int a[5],i,j,temp,sum=0;
	clrscr();
	printf("\nEnter Array Elements\n");
	for(i=0;i<5;i++)
	{
		printf("\nEnter %d Element : ",i);
		scanf("%d",&a[i]);
	}

	printf("\nArray Elements Are\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}
	for(i=0;i<5;i++)
	{
		for(j=i+1;j<5;j++)
		{
			if(a[i]>a[j])
			{
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}
		}
	}

	printf("\n");
	printf("\nArray Elements Are In Ascending Order\n");
	for(i=0;i<5;i++)
	{
		printf("\nA[%d] : %d",i,a[i]);
	}
	getch();

}