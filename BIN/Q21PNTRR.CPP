#include<fstream.h>
#include<process.h>
#include<conio.h>
struct s
{char carr[10];
int a;
float b;
}sa[2];
void main()
{clrscr();
cout<<sa[0].carr<<(&sa[0])*.a;cout<<(&sa[0])*.b;
cout<<sa[1].carr<<(&sa[1])*.a<<(&sa[1])*.b<<"\n";
getch();
}