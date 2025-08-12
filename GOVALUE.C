#include<stdio.h>
#include<conio.h>

void main()
{
	int x;
	clrscr();
	Retry:
	printf("\nEnter Your Value : ");
	scanf("%d",&x);
	if(x>0)
	{
		printf("\nThe Square of %d is %d",x,x*x);
	}
	else
	{
		goto Retry;
	}
	getch();

}