#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
       char s1[50];
       int l1,i,count=0;
       clrscr();
       printf("\nEnter String 1 : ");
       gets(s1);
       // l1=strlen(s1);

       for (i=0;s1[i]!='\0';i++)
       {
		count++;
       }
       printf("\nLength Of String 1 is %d",l1);
       getch();

}