#include<stdio.h>
#include<conio.h>
void main()
{int n;
 int fact=1,i=1;
clrscr();
printf("\n ntr the value of n::");
 scanf("%d",&n);
 /*while(n>1)
 {
  fact=fact*n;
  n--;
  }*/
 while(i<=n)
 {
  fact*=i;
    i++;
    }
 printf("\nThe factorial of given number is :: %d",fact);
 getch();
 }