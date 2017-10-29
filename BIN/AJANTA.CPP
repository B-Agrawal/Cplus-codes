#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
char *t="AJANTA";
int *p,num[]={1,5,7,9};
*p=num;
cout<<*p<<t<<endl;
p++;
t++;
cout<<*p<<t<<endl;
getch();
}
