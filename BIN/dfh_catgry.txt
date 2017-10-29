#include<iostream.h>
#include<conio.h>
#include<fstream.h>
#include<stdio.h>
#include<string.h>
class student
{ public:
char name[30],cat[4],sex;

int clas;
}

tmp[5];

void main()
{
clrscr();
int boys=0;
int girls=0;
int nbsp=0;
int bsp=0;
ofstream fout;
{ fout.open("student.dat",ios::out);

for(int i=0;i<5;i++)
{
cout<<"enter name";
gets(tmp[i].name);
cout<<"enter class";
cin>>tmp[i].clas;
cout<<"enter category(bsp/nbsp)";
cin>>tmp[i].cat;
cout<<"enter sex";
cin>>tmp[i].sex;
fout.write((char*)&tmp[i],sizeof(tmp[i]));
}
fout.close();
ifstream fin;
fin.open("student.dat",ios::in);
for (i=0;i<5;i++)
{
fin.read((char*)&tmp[i],sizeof(tmp[i]));
if(strcmpi("nbsp",tmp[i].cat)==0)
{
nbsp++;
}
else
{
bsp++;
}
if(tmp[i].sex=='b')
{
boys++;
}
else
{
girls++;
} } fin.close();
cout<<"________________________"<<endl;
cout<<"name  class  cat(bsp/nbsp)  sex" <<endl;
cout<<"_______________________"<<endl;
cout<<"_______________________"<<endl;
cout<<"total BSP"<<bsp<<endl;
cout<<"total NBSP"<<nbsp<<endl;
cout<<"total BOYS"<<boys<<endl;
cout<<"total GIRLS"<<girls<<endl;
getch();
}}
