#include<iostream.h>
#include<conio.h>

void main()
{
 clrscr();
  int ft=6,st=28,tt=66,tmp,r;
  cout<<"no of times";
  int n;
  cin>>n;
  cout<<ft<<" "<<st<<" "<<tt;
  for(int i=0;i<n;i++)
  {   tmp=(((tt+8)*2)-st);
    ft=st;
   st=tt;
   tt=tmp;
  cout<<" "<<tmp;
  }
  getch();
  }
