#include<stdio.h>
#include<conio.h>

void main()
{
	int a=0,b=0,c=0,d=0,result;
	clrscr();
	result = a++ + ++b + --c +d-- + ++a + --d;
	printf("\nNumber A : %d",a);
	printf("\nNumber B : %d",b);
	printf("\nNumber C : %d",c);
	printf("\nNumber D : %d",d);
	printf("\nResult : %d",result);

	getch();
}