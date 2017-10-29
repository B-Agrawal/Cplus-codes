#include<iostream.h>
#include<conio.h>
class batting
{char name[20];
int s,f,runs,x;
int ors;
public:
void assign();
void update();
void disp();
};
void batting::update()
{
f=0;s=0;
 for(int i=1;i<=ors*6;i++)
   {cout<<'\n'<<"runs at  "<<i<<" th ball"<<'\t';
  cin>>runs;

   if(runs==6)
   { s++;  x=x+runs;}
   else if(runs==4)
   { f++;  x=x+runs;}
  else { x=x+runs;}

    } }

void batting::assign()
{
 cout<<"\n enter name";
 cin>>name;
 cout<<"\n enter over";
 cin>>ors;
  cout<<"\nenter runs";
    update();
   }
  void batting::disp()
  {cout<<'\n';
  cout<<name<<"\nsixs"<<s<<"\nfours"<<f<<"\ntotal runs "<<x;
  cout<<"\n"<<ors<<"overs";
  }
  void main()
  {clrscr();
  batting b;
  b.assign();
  b.disp();
  getch();
  }
