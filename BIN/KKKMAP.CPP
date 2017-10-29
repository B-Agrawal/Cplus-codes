#include<iostream.h>
#include<conio.h>
#include"kmap.h"
int k[10];
void getdata()
{ int i,n;
  cout<<"\n enter no of values";
   cin>>n;
  cout<<"enter the values 0 or 1 to be entered";
  for(i=0;i<n;i++)
   { cin>>k[i];   }

 }
void putdata()
{  int m=16,n=9;
 for(int i=0;i<2;i++)
  { for(int j=0;j<2;j++)
    {
      gotoxy(m,n);
     cout<<k[i];
      m+=10;
     }
     n+=3;m=16;
  }
}
void main(void)
{
clrscr();
getdata();
ded();
values();
putdata();
desi();
getch();

}