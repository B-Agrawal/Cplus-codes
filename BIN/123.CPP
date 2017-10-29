#include<iostream.h>
#include<conio.h>
int x=5,y=3;

class outer
{public:
  int x,a;
  static int s;
  class inner{
	       public:
	       int a,x;
		void fn(int i)
		{ x=i;
		s=i;
		y=i;
		a=i;
		}
	     };
   inner i1;
   void g(int i)
   { x=i;s=i;a=i;y=i;
   }
};
int outer::s;
outer ob1;
void main()
{cout<<"\n\n\n\n\n";
ob1.i1.fn(3);
ob1.g(8);
cout<<"\n""\n\n";
cout<<::x<<'\n'<<::y<<'\n'<<ob1.x<<'\n'<<ob1.a<<'\n'<<ob1.s<<'\n'<<ob1.i1.a;
getch();
}