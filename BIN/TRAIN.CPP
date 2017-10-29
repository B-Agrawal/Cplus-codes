#include<iostream.h>
#include<conio.h>
class train
{int tno,tripno,pcount;
public:
train(int trnno=1)
{tno=trnno;
tripno=0;
pcount=0;
}
void trip(int tc=100)
{ tripno++;pcount=tc;}
void show()
{cout<<tno<<":"<<tripno<<":"<<pcount<<":"<<endl;
}
};
void main()
{clrscr();
 train t(10),n;
 n.trip();
 t.show();
 t.trip(70);
 n.trip(40);
 n.show();
 t.show();
 getch();
 }