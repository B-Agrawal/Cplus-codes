#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>

class item
{public:
char iname[30];
int qty;
float up,amt,ttl;

void getdata();
void putdata();
void ppp()
{gotoxy(50,20);
cout<<ttl;
}
void calc();
};
void item::calc()
{ amt=up*qty;
 ttl=ttl+amt;
 }
void item::getdata()
{cout<<"\nentr name";
 gets(iname);
 cout<<"\n entr no";
 cin>>qty;
 cout<<"\nentr marks in 5 subjects";
 cin>>up;
calc();

 }
void item::putdata()
{
 cout<<iname<<"          "<<qty<<"           "<<up<<"          "<<amt;
 }
void main()
{
 clrscr();
 item ii[5],it;
 int i;
 for(i=0;i<2;i++)
  { ii[i].getdata();
   }
 for(i=0;i<66;i++)
   cout<<'-';
  cout<<'\n'<<"NAME"<<"      "<<"quantity"<<"      "<<"Unit price"<<"      "<<"amount";
   cout<<endl;
 for(i=0;i<66;i++)
   cout<<'-';
   cout<<endl;
   for(i=0;i<2;i++)
    {ii[i].putdata();
     cout<<endl;   }
  for(i=0;i<66;i++)
   cout<<'-';
   gotoxy(35,20);
    cout<<"Total Rs.  _________";
  it.ppp();
 getch();
 }
