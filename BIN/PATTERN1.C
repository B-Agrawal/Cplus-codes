#include<stdio.h>
#include<conio.h>
void main()
{
 int i,j,n;
 clrscr();
 for(i=0;i<5;i++)
 { for(j=0;j<5;j++)
  {   if((i+j)>=4)
      printf("*");
      else
       printf(" ");
   }printf("\n");
   }
 getch();
 }

