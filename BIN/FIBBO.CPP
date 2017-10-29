#include<iostream.h>
#include<conio.h>
void main()
{ clrscr();
 int ft=0,st=1,tmp,i=1,n;
  cin>>n;
  cout<<ft<<" "<<st<<" ";

    while(i<=n)
   {
	tmp=ft+st;
	ft=st;
	st=tmp;
	cout<<" "<<tmp;
	i++;
   }
   getch();
   }