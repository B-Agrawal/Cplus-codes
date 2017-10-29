#include<fstream.h>
#include<conio.h>
#include<process.h>

class emmpp
{ int eno;
char ename[20];
int da,hr;
void calc()
{ da=100+hr;
}
public:
void indata();
void outdata();
};
void emmpp::indata()
{ cin>>eno;
cin>>ename;
cin>>hr;calc();
}
void emmpp::outdata()
 {cout<<eno<<'\n'<<ename<<'\n'<<da<<"sal"<<'\n';
  }
void main()
{clrscr();
 emmpp e; int n,c=0;
 cout<<"\n enter no ofemmpp:";cin>>n;
ofstream o1("emmpp.dat",ios::binary);
if(!o1)
{cout<<"\file does not exit";
 exit(0);
 }
else
 { while(c<n)
    { e.indata();
      o1.write((char *)&e,sizeof(e));
      c++;}
   }
o1.close();
emmpp e1;

ifstream i1("emmpp.dat",ios::in);
if(!i1)
{cout<<"\n file does not exist :";
exit(0);
}
else
{ while(i1.read((char *)&e1,sizeof(e1)))
  { e1.outdata();
  }
}
i1.close();
getch();
}


