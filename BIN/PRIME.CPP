#include<iostream.h>
#include<conio.h>
void main()
{
clrscr();
int  num,i=2,f=0;
cin>>num;
while(i<num)
{
  if((num%i)==0)
 { f=1;break;}
  else
  f=0;
  i++;
  }
 if(f==0)
 cout<<"\n prime";
 else
 cout<<"\nnot prime";
 getch();
 }
