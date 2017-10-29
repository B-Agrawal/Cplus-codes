#include<stdio.h>
#include<conio.h>
void main()
{
 char ch;int n=0;
 clrscr();
 printf("enter a char (in small a-z)\t");
 scanf(" %c",&ch);
 switch(ch)
 {
  case 'a':n=1;
  case 'e':n=1;
  case 'i':n=1;
  case 'o':n=1;
  case 'u': n=1;
	   break;
    default:n=0;
  }
  if(n==1)
 printf("\n %c is a vowel",ch);
 else
   printf("\nnot a vowel");
   printf("\n press any key");

 getch();
 }
