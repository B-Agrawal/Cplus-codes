#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>

class stu
{int rno;
 char name[25];
 float m1,m2,m3,per;
 void calc()
 {per=(m1+m2+m3)/3;  }
public:
 void getdata();
 void disp();

 };
void stu::getdata()
{ cout<<"\n enter name";
  gets(name);
  cout<<"\n enter rno";
  cin>>rno;
  cout<<"\n enter marks of three subject";
   }
void stu::disp()
{cout<<"\n NAME :"<<name;
cout<<"\n ROLL NO : "<<rno;
}

void main()
{clrscr();
stu s[50];//int n;
//cout<<"enter no";
//cin>>n;
/*ofstream o1("stu.dbs",ios::binary);
if(!o1)
{cout<<"\nFile not exit";
exit(0);
}
else
{  for(int i=0;i<n;i++)
    { s[i].getdata();
      o1.write((char *)&s[i],sizeof(s[i]));
      }
  } */
 ifstream i1("stu.dbs",ios::binary|ios::in);
 ofstream o2("stu90.dbf",ios::binary|ios::out);
 if(!i1)
 { cout<<"\n file does not exist";
  exit(0);
  }
else
{ int i=0;
 while(i1.read((char*)&s[i],sizeof(s[i])))
      o2.write((char*)&s[i],sizeof(s[i]));
     i++; }
getch();
}