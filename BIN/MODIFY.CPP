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
   { long mno;  int f=0; camera cn; int loc=0;

    fstream i1("camera.dat",ios::binary|ios::in|ios::out);
     cout<<"\n enter model no to be searched for";
     cin>>mno;
     if(!i1){cout<<"\n file oopppss";}
     else
     { while(i1.read((char*)&cn,sizeof(cn)))
	 { if(cn.retmno()==mno)
		{  cn.enter();
	   loc=i1.tellg()-sizeof(cn);
		i1.seekg(loc);
	     i1.write((char*)&cn,sizeof(cn));
		}
	 }
      }

      // f=1;break;}
      //	 }}
      // if(f==0){cout<<"not foiund";}
     i1.close();
     }
    void show()
    {camera cn;
       ifstream ii1("camera.dat",ios::binary|ios::in);
	while(ii1.read((char*)&cn,sizeof(cn)))
       {cn.display();
     }
   }
  void main()
  {clrscr();
  // write();

  search();
  show();
   getch();
   }