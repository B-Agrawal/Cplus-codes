#include<stdio.h>
#include<conio.h>
void main()
{
 int num,q,r,sum=0;
 clrscr();
 scanf("%d",&num);
 do
 {
  q=num/10;
  r=num%10;
  sum=sum+r;
  num=q;
  }while(num>0);
 printf("\n sum of the num = %d",sum);
 getch();
 }