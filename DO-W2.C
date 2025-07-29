#include<stdio.h>
#include<conio.h>

void main()
{
	int n,sum;
	clrscr();
	printf("\nEnter N Number : ");
	scanf("%d",&n);
	printf("\nEnter SUM Value : ");
	scanf("%d",&sum);
	do
	{
		sum=sum+n;
		n--;
	}while(n>0);
	printf("\nSum : %d",sum);

	getch();

}