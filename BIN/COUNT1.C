#include<stdio.h>
#include<conio.h>
void main()
{
 double nc;
 for(nc=0;getchar()!=eof();++nc);
 printf("%.0f\n",nc);
 getch();
 }