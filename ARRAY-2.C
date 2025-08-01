#include<stdio.h>
#include<conio.h>

void main()
{
	int a[10],i;
	clrscr();
	printf("\nEnter Array Elements\n");
	for(i=0;i<10;i++)
	{
		printf("\nEnter %d Element : ",i);
		scanf("%d",&a[i]);

	}

	printf("\nArray Elements Are\n");
	for(i=0;i<10;i++)
	{
		printf("\nA[%d] = %d",i,a[i]);
	}
	getch();

}