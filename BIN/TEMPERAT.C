#include<stdio.h>
#include<conio.h>
void main()
{
  float fr,cl;

 // int lowr,upr,step;
  clrscr();
 // lowr=0;upr=300;step=20;
 // fr=lowr;
/*  while(fr<=upr)
  {
    cl=(5.0/9.0)*(fr-32.0);
    printf("%3.0f %6.3f\n",fr,cl);
    fr=fr+step;
    }
    getch();
    } */
  for(fr=0;fr<=300;fr+=20)
  {
    printf("%3.0f %6.2f\n",fr,(5.0/9.0)*(fr-32.0));
    }
    getch();
    }