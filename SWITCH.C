#include<stdio.h>
#include<conio.h>

void main()
{
	int a,b,ans,choice;
	clrscr();
	printf("\nEnter Number A : ");
	scanf("%d",&a);
	printf("Enter Number B : ");
	scanf("%d",&b);

	printf("\n1. Addition");
	printf("\n2. Subtraction");
	printf("\n3. Multiplication");
	printf("\n4. Division");

	printf("\nEnter Your Choice From Above : ");
	scanf("%d",&choice);

	switch(choice)
	{
		case 1:
			ans=a+b;
			printf("\nAddition : %d",ans);
			break;
		case 2:
			ans=a-b;
			printf("\nSubtraction : %d",ans);
			break;
		case 3:
			ans=a*b;
			("\nMultiplication : %d",ans);
			break;
		case 4:
			ans=a/b;
			("\nDivision : %d",ans);
			break;
		default:
			printf("Not Given");


	}
	getch();
}