#include<iostream.h>
#include<conio.h>
void shift(int a[],int n)
{
 int i,tmp,t;
       t=a[0];
  for(i=0;i<n-1;i++)
   {  a[i]=a[i+1];
      }
    a[n-1]=t;
  for(i=0;i<n;i++)
   cout<<a[i];
   }
void main()
{
 clrscr();
 int x;
 int a[10];
 cin>>x;
 for(int i=0;i<x;i++)
  cin>>a[i];
  shift(a,x);
  getch();


}
