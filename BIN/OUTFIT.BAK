#include<iostream.h>
#include<conio.h>
#include<string.h>
class outfit
{ char ot[25],oc[25],of[25];
 int os;
 float op;
 public:
 outfit()
 { strcpy(oc,"no intial");
  strcpy(ot,"no inital");
  os=op=0;
 }
 void intprice();
 void input();
 void disp();
 };

 void outfit::intprice()
 {if(strcmpi(of,"denim")==0)
     {
	if(strcmpi(ot,"trouser")==0)
	    op=1500;
	     else if(strcmpi(ot,"jacket")==0)
	       op=2500;
	}
   else
       {if(strcmpi(ot,"trouser")==0)
	  op=0.25*1500;
	  else if(strcmpi(ot,"jacket")==0)
	    op=0.25*2500;
	   }
  }
 void outfit::input()
 { cout<<"\nenter code \t :";
 cin>>oc;
 cout<<"\nenter type(troluser/jacket) \t :" ;
 cin>>ot;
 cout<<"\n entersize \t : ";
 cin>>os;
 cout<<"\n enter fabric\t:";
  cin>>of;
  intprice();
  }
 void outfit::disp()
 {cout<<"\nr DETAILS \n";
    cout<<"\n"<<oc<<"\n"<<ot<<"\n"<<os<<"\n"<<of<<"\nRs."<<op<<"\n";
    }
  void main()
  {clrscr();
  outfit o;
  o.input();
  o.disp();
  getch();
  }

