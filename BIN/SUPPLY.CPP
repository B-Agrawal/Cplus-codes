#include<iostream.h>
#include<conio.h>
#include<string.h>
#include<stdio.h>
/*class supply
{ int cd;
 char fname[20];
 char st[20],ftype[20];
 void gettype()
 { if(strcmpi(st,"green")==0)
    strcpy(ftype,"veg");
   else
       if(strcmpi(st,"yellow")==0)
	 strcpy(ftype,"contain egg");
      else
       if(strcmpi(st,"red")==0)
	  strcpy(ftype,"non veg");
 }
  public:
  void foodin()
  { cout<<"\n enter detail ";
    gets(fname);
    cin>>cd;
    gets(st);
    gettype();
  }
 void foodout()
 { cout<<fname<<"\n"<<cd<<'\n'<<st<<'\n'<<ftype;
 }
 };
 void main()
 {clrscr();
  supply s;
  s.foodin();
  s.foodout();
  getch();
  }


  */
 class base
 { public:
    base()
    { cout<<" base"<<endl;
    }
   base(int i)
   {cout<<"base"<<i<<endl;}

   ~base()
   { cout<<" dest base"<<endl;
   }
   };
  class der:public base
  {  public:
   der()
   { cout<<"der"<<endl;
    }
   der(int i):base(i)
   {cout<<"der"<<i<<endl;}
   ~der()
   {cout<<"dest der"<<endl;
   }
  };


void main()
{clrscr();
base a;
der d(2);
getch();
}


