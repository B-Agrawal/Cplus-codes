#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
  int n=0;
  char ch;
  cout<<"\n enter any char";
  cin>>ch;
  switch(ch)
  {
   case'a': n=1;break;
   case'e': n=1;break;
   case'i':n=1; break;
   case'o':n=1; break;
   case'u':n=1; break;
   default:n=0;
   }
   if(n==1)
    cout<<"\n"<<ch<<" is a vowel";
    else
     cout<<"\n"<<ch<<" not a vowel";
     getch();
     }