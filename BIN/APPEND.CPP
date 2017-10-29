#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<process.h>

class stu
{int rno;
char name[25];
public:
void getdata()
{cout<<"\n enter name";
cin>>name;
}
void disp()
{cout<<"\n name:\t"<<name;
  }
 }s1;
void main()
{ clrscr();
  int n,c=0;
   cout<<"|n enter no of stu";
   cin>>n;
  ofstream o1("stu.dat",ios::app|ios::binary);
  if(!o1)
  { cout<<"\nfile not exist";
    exit(0);
    }
  else
  {l: while(c<n)
    { s1.getdata();
      o1.write((char *)&s1,sizeof(s1));
    //  s1.disp();
    c++;
  }
  char ch;
   cout<<"\n want to enter more";
    cin>>ch;
   if(ch=='y'||ch=='Y')
   {  cin>>n;
   c=0;
    goto l;  }
       }
 o1.close();
 getch();
 }


