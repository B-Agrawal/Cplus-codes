#include<iostream.h>
#include<conio.h>
struct game
{ char mag[20];int i;}h;

void main()
{clrscr();
game m={"Tiger",500};
char *ch;
ch[4]='P';
ch[2]='L';
h.i+=50;
cout<<m.mag<<h.i<<endl;
game n=m;
n.mag[0]='A';
n.mag[3]='J';
n.i=120;
cout<<n.mag<<n.i<<endl;
getch();
}