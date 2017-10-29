#include<iostream.h>
#include<conio.h>
#include<stdio.h>
class worker
{int wno;
char nm[20];
float hr,wg,tot;
float calc()
{ tot=hr*wg;
  return tot;}
public:
 void indata();
 void outdata();
 };
void worker::indata()
{  cin>>wno;
gets(nm);
cin>>hr;cin>>wg;
calc();
}
void worker::outdata()
{ cout<<wno;puts(nm);
cout<<' '<<hr<<' '<<wg<<' '<<tot;
}
void main()
{clrscr();
worker w;
w.indata();
w.outdata();
getch();
}
