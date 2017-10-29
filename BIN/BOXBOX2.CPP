#include<iostream.h>
#include<conio.h>
void main()
{
 clrscr();
 int n,i,j;
 cout<<"\n nter the value of n = ";
 cin>>n;


 for(i=1;i<=n;i++)
 {
   for(j=1;j<=n;j++)
    {
      if(i==1||j==1||i==n||j==n)
       cout<<"*";
       else cout<<" ";
     } cout<<endl;
 }

 getch();
 }