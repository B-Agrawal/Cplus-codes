#include<iostream.h>
#include<conio.h>
#include<stdlib.h>
void main()
{cout<<"\n\n\n";
randomize();
char re[][10]={"gold","silver","bronze"};
int getit=9,guess;
//for(int i=1;i<4;i++)
{ guess=random(3);

 cout<<getit-guess<<re[guess]<<"*";
}
getch();
}
