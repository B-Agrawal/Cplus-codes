#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class serial
{ int scod,nop;
  char title[25];
  float due;
  public:
  serial()
  {due=30.0;
   nop=10;
   }
void newserial()
 {  cout<<"\n enter s code :";
   cin>>scod;
   cout<<"\n nter title";
   gets(title);
   }
void other(int n,float d)
{  due=d;
nop=n;
}
void display()
{cout<<scod<<'\n'<<title<<'\n'<<due<<"hours"<<nop<<"episode";
}
};
void main()
{clrscr();
 serial s;
 s.newserial();
 s.other(70,45);
 s.display();
 getch();
 }