#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
#include<string.h>
class student
{ int pno;
  char name[20];
  public:
  void getdata();
  void putdata();
  char* getname();
  void retphno();
  }ss;
void student::getdata()
{ cout<<"\n enter name";
  gets(name);
  cout<<"\n enter phone no";
  cin>>pno;
  }
void student::putdata()
{cout<<"\n Name\t\tpno\n";
 cout<<name<<"\t\t"<<pno;
 }
char* student::getname()
{ return name;
}
void student::retphno()
{ cout<<"\t"<<pno;
}

void stud()
{ char ch;int n;
ofstream o1("std.dbf",ios::out|ios::binary);
 if(!o1)
 { cout<<"\n file does not exist";
  exit(0);
  }
 else
  { int n=0,N;
  cout<<"\n no of detail to be enterd";
   cin>>N;
   while(n<N)
   { ss.getdata();
     o1.write((char*)&ss,sizeof(ss));
     n++;
     }
  o1.close();
 }
}
void display()
{ char sname[20];
 cout<<"\n enter name to see the phno";
  gets(sname);
  ifstream i1("std.dbf",ios::in|ios::binary);

  if(!i1)
 { cout<<"\n file does not exist";
  exit(0);
  }
  else
   { while(!i1.eof())
     {    i1.read((char*)&ss,sizeof(ss));
       if(strcmpi(ss.getname(),sname)==0)
	 ss.retphno();
       //	else
	 //r cout<<"\n not found in the directory";

	}
     }
  i1.close();
  }
void main()
{clrscr();
//  stud();
 display();
  getch();
  }

