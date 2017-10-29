#include<fstream.h>
#include<conio.h>
#include<process.h>
#include<stdio.h>
class address
{ char name[25];
 char ad[20];
 int telno;
 public:
  void enter();
   void show();
  int tellphno();
  };
  void address::enter()
  {
     cout<<"\n entr the details";
     gets(name);
     gets(ad);
     cin>>telno;
     }
   void address::show()
   {
    cout<<"\n name"<<name;
    cout<<"\n addrs "<<ad;
     }
   int address::tellphno()
    {
      return telno;
      }
   void appending()
   { address a;
     ofstream o1("adres.dbf",ios::out|ios::binary|ios::app);
     if(!o1)
      {cout<<"\n file not open";
	exit(0);
	}
      else
	 { cout<<"\n do you want to ewnter ";
	  char ch;
	  cin>>ch;
	   while(ch=='y'||ch=='Y')
	     { a.enter();
	       o1.write((char*)&a,sizeof(a));
	       cout<<"\n wnat";cin>>ch;
	      }
	   }
	o1.close();
	}
      void seedetails()
      { address aa;
	ifstream i1("adres.dbf",ios::in|ios::binary);
	 if(!i1)
	  {cout<<"\n !!!!!!!!!!!!!!";
	  exit(0);
	  }
	 else
	   {  int tp;
	     cout<<"\n enter telpno";
	      cin>>tp;          int f=1;
	      while(!i1.eof())
	       {   i1.read((char*)&aa,sizeof(aa));
		    if(aa.tellphno()==tp)
		     {  aa.show(); f=1;break; }
		      else f=0;
		      }
		    if(!f)
		     cout<<"\n not found";
	       i1.close();
	      }
	   }
       void main()
       {
	 clrscr();
	  int ch;
	 cout<<"\nenter 1. append\n2.serch: ";
	 cin>>ch;
	 switch(ch)
	 { case 1:appending();
		 break;
	   case 2:seedetails();
	    break;
	   default:cout<<"\n wrong choice";
	   }
       getch();
       }


