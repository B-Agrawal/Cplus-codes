#include<stdio.h>
#include<conio.h>
void main()
{ int x,y,temp;
 clrscr();
 printf("\n enter the two value" );
 scanf("%d%d",&x,&y);
 temp=x;
 x=y;
 y=temp;
 printf("\n after swapping the values :: ",x,y);
 getch();
 }