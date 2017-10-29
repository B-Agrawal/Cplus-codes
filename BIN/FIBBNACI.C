#include<stdio.h>
#include<conio.h>
main()
{
 int i,f1=0,f2=1,f,lim;
 clrscr();
 printf("%d %d",f1,f2);
// scanf("\n%d",&lim);
 for(i=0;i<10;i++)
 {
   f=f1+f2;
   f1=f2;
   f2=f;
   printf("  %d",f);
   }
  getch();
  }