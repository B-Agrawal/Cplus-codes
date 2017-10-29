#include<iostream.h>
#include<conio.h>
void reverse(int a[],int n)
{  int temp;
  for(int i=0;i<n;i++)
   {
     temp=a[i];
     a[i]=a[n-i-1];
     a[n-i-1]=temp;
     }
 }

void main()
{
 clrscr();
 int x[10],s;
 cin>>s;
 for(int i=0;i<s;i++)
  cin>>x[i];
  reverse(x,s);
  for(int j=0;j<s;j++)
   cout<<x[j]<<' ';
   getch();
   }


