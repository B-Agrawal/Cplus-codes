#include<iostream.h>
#include<fstream.h>
#include<process.h>
#include<conio.h>
#include<stdio.h>
class camera
{ long mdlno;
  char name[25];
  public:
  void enter()
  { cout<<"\n enter name";
   gets(name);
   cout<<"\n entr model no";
    cin>>mdlno;
    }
  void display()
  {cout<<name<<mdlno;
  }
  int retmno()
  { return mdlno;
  }
 };
 void write()
 { camera cm;
  char ch;
    cout<<"\n wnat to enter ";
    cin>>ch;
 ofstream o1("camera.dat",ios::binary||ios::out);
   if(!o1){cout<< "!!!!!!oops";
	   exit(0);}
    else
    { while(ch=='y'||ch=='Y')
     { cm.enter();
       o1.write((char*)&cm,sizeof(cm));
       cout<<"|n choice(y/n)";
	cin>>ch;
	}
	}
     o1.close();
     }
   void search()
   { long mno;  int f=0; camera cn;
    ifstream i1("camera.dat",ios::binary|ios::in);
     cout<<"\n enter model no to be searched for";
     cin>>mno;
     if(!i1){cout<<"\n file oopppss";}
     else
     { while(i1.read((char*)&cn,sizeof(cn)))
     { if(cn.retmno()==mno)
	{cn.display();
       f=1;break;}
       }}
       if(f==0){cout<<"not foiund";}
     i1.close();
     }
  void main()
  {clrscr();
  // write();
  search();
   getch();
   }