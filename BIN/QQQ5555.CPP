#include<iostream.h>
#include<conio.h>
#include<stdio.h>
struct employee
{
int sno;
char name[20];
float ba,da,hra,ttl,pf,npay;
}emp[5];

void main()
{
 clrscr();
 for(int i=0;i<2;i++)
 {
 cout<<"\n enter the sno  /  name";cin>>emp[i].sno;
 gets(emp[i].name);
 cout<<"\n enter the basic sal";
 cin>>emp[i].ba;
 emp[i].da=0.3*emp[i].ba;
 emp[i].hra=0.1*emp[i].ba;
 emp[i].pf=0.1*emp[i].ba+emp[i].da;
 emp[i].ttl=emp[i].ba+emp[i].da+emp[i].hra;
 emp[i].npay=emp[i].ttl-emp[i].pf;
 }
// cout<<endl<<endl;
 clrscr();
 gotoxy(20,7);
 cout<<"SALARY REGISTER";
cout<<endl;
 int j;
for( j=0;j<60;j++)
 cout<<'-';
cout<<endl;
cout<<"S.NO."<<"      "<<"Name"<<"      "<<"Basic"<<"   "<<"Da "<<"   "<<"Hra"<<"  "<<"total"<<"  "<<"Pf"<<"  "<<"Net Pay";
cout<<endl;
for( j=0;j<60;j++)
 cout<<'-';
 cout<<endl;
 for(j=0;j<2;j++)
 {cout<<emp[j].sno<<"       "<<emp[j].name<<"    "<<emp[j].ba<<"   "<<emp[j].da<<"   "<<emp[j].hra<<"   "<<emp[j].ttl<<"  "<<emp[j].pf<<"  "<<emp[j].npay<<endl;

  }
 cout<<endl;

for( j=0;j<60;j++)
 cout<<'-';
getch();
}


