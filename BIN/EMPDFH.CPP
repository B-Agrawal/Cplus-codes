#include<fstream.h>
#include<conio.h>
#include<process.h>
class employee
{int eno;
char ename[25];
public:
 void getdata()
 { cout<<"\nenter eno";
  cin>>eno;
  cout<<"\n  enter name";
   cin>>ename;
   }
  void disp()
  {cout<<"\n"<<eno<<"\n"<<ename;
   }
  int returneno()
  { return eno;
    }
};
employee e,e1;

void write()
{  ofstream o1("emp.dat",ios::binary|ios::out);
  if(!o1)
  {  cout<<"\nfile not open";
   exit(0);
   }
  else
  { while(o1)
     {  e.getdata();
	o1.write((char*)&e,sizeof(e));
	}
     }
  o1.close();
  }
void read()
{ cout<<"|n enter eno to be deleted";
    e1.getrno();
ifstream i1("emp.dat",ios::binary|ios::in);
   ofstream o2("temp.dat",ios::binary|ios::out);
    if(!o2)
    {cout<<"\n file not open";
    exit(0);
    }
  else
   {
      while(i1.read((char*)&e,sizeof(e)))
      { if(e.returneno()=e1.getrno())
	  o2.write((char*)&e,sizeof(e));
	 }
      }
  i1.close();
  o2.close();
 remove("emp.dat");
 rename("temp.dat","emp.dat" );
 }
void show()
{ifstream i2("emp.dat",ios::binary|ios::in);
  if(!i2)
  {   cout<<"\n file does not exist";
    exit(0);
    }
  else
     {  while(i2.read((char*)&e,sizeof(e)))
	e.disp();
	}
   }

void main()
{clrscr();
 write();
 read();
 show();
 getch();
 }
