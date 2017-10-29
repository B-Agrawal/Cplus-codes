#include<iostream.h>
#include<conio.h>
#include<string.h>
void main()
{clrscr();
char a[]="able was i ere i saw elba";
char *t,*s,*b;
s=a;b=a+strlen(a)-1;
t=b;
while(s!=t)
{cout<<*s;
s++;
cout<<*t;
t--;
}
getch();
}
