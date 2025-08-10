#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
       char s1[100],s2[100];
       int x;
       clrscr();
       printf("\nEnter String 1 : ");
       gets(s1);
       strcpy(s2,s1);
       strrev(s1);
       printf("\nS1 : %s",s1);
       printf("\nS2 : %s",s2);
       x=strcmp(s1,s2);
       if(x==0)
       {
		printf("\nThe Given String Is Palindrome");
       }
       else
       {
		printf("\nThe Given String Is Not Palindrome");
       }
       getch();

}