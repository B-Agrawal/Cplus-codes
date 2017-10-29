#include<iostream.h>
#include<conio.h>
class play {
int pcode,nos;
float du;
char ptitle[25];

public:
 play()
 {du=45;
 nos=5;
 }
 void newplay();
 void moreinfo();
 void shoplay();
 };
void play::newplay()
{cout<<"\n ntr title";
