#include<iostream.h>
#include<conio.h>
class A
{public:
A(){ cout<<"cons  A\n";}
~A(){cout<<"des A\n";}
};
class B: private A
{public:
B(){cout<<"cons B\n";}
~B(){cout<<"des B\n ";}
};
class C: public A
{public:
  C(){cout<<"cons C\n";    }
  ~C(){cout<<"des D\n";    }
  };
class D: virtual protected A
{public:
D(){cout<<"cons D\n";
   }
   ~D(){cout<<"des D\n";
   }
   };
class E
{public:
E(){cout<<"cons E\n";}
~E(){cout<<"des E\n";}
 };
class F:public B,public C,public D
{ E e;
public:
F(){cout<<"cons F\n";}
~F(){cout<<"des F\n";}
};
void main()
{clrscr();// cout<<"\n\n\n";
 F f;
 cout<<"program over";
 getch();}