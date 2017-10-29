#include<iostream.h>
#include<conio.h>
class a
{
 public:
    a()
    {cout<<"\n A";}
    ~a()
    {cout<<"\n dis A";}
};
class b
{ public:
  b(){ cout<<"\n B";
  }
  ~b(){cout<<"\n dis B";}
  };
class c{ a ss,dd;
	 b oi;
   public:
    c(){ cout<<"\n C"; }
    ~c(){cout<<"\n dis C";
    }
    };
 void main()
 {  c ni;
    b cd;
    a ob;


  getch();
  }