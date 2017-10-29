#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
class insert
{ char name[25];
 int rno;
public:
  void getdata()
  {cout<<"\nenter: ";
    gets(name);
     cout<<"\n enter rno";
  cin>>rno;   }
  void putdata()
  { cout<<"\n"<<name<<"t"<<rno;}
  int returnrno()
   { return rno;}
 };

void wwrite()
{ insert i;
char ch;
cout<<"\n want to entr th records(y/n);";
 cin>>ch;
 ofstream o1("emmp.dbf",ios::binary|ios::out);
  if(!o1)
  {cout<<"\n not open!@!!!!";
   exit(0);
   }
 else
 {
 while(ch=='y'||ch=='Y')
    { i.getdata();
      o1.write((char*)&i,sizeof(i));
     cout<<"\n enter choice";
     cin>>ch;
      }
      }
  o1.close();
  }
void wread()
{ insert i,i1; int eno;
 cout<<"\n enter no to be be deleted ";
      cin>>eno;
   ifstream a1("emmp.dbf",ios::binary|ios::in);
   ofstream a2("temp.dbf",ios::binary|ios::in);
   if(!a2)
   {cout<<" not exist";
    exit(0);
    }
   else
   {   while(a1.read((char*)&i,sizeof(i)))
      {
	 if(i.returnrno()!=eno)
	    { a2.write((char*)&i,sizeof(i)); }

    }  }
  a1.close();
  a2.close();
  remove("emmp.dbf");
  rename("temp.dbf","emmp.dbf");
 }
void show()
 {insert i;
 ifstream a3("emmp.dbf",ios::binary|ios::in);
   while(a3.read((char*)&i,sizeof(i)))
   {
     i.putdata();
       }
    }
void main()
{ clrscr();
// wwrite();
 wread();

 show();
 getch();
 }



