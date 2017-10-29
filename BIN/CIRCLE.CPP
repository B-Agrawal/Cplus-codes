#include<iostream.h>
#include<conio.h>
class circle
{ public:
  float r,x,y;
  float ar,c;
  void area();

  void circum();

};
 void circle::area()
   { cin>>r>>x>>y;
   ar=3.14*r*r;
   cout<<"\nradius : "<<r;
   cout<<"\ncoordinate of center = "<<x<<' '<<y;
   cout<<"\n area = "<<ar;
   }
   void circle::circum()
   { c=2*3.14*r;
 cout<<"\n circumference = "<<c;

  }
 void main()
 {clrscr();
 circle c;
 c.area();
 c.circum();
 getch();
 }