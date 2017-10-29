#include<stdio.h>
main()
{
  union DATA
  {
   int i;
   float f;
   unsigned char str[20];
   }d;
   clrscr();
   printf("%d",sizeof(d));
   getch();
   }