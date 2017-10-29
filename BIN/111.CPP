#include<iostream.h>
#include<conio.h>
class A
{static int c;
public:
A()
{c++;
cout<<" object "<<c<<"being created \n";
}
~A()
{cout<<"object "<<c<<"bieng destroyed\n";c--;
}
};
int  A::c=0;
void  main()
{ cout<<endl<<endl;
void f1();
A o1,o2;
f1();
{A o3;}
getch();
}
void f1()
{A o4;
}