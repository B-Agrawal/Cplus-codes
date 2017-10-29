#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
void bookentry();
class book
{int bno,nob;
 char name[20];
 char pub[20];
 char writer[20];
 public:
 void getdata();
 void putdata();
 }bb;

void book::getdata()
{
 cin>>bno;
   gets(name);
   gets(pub);
  gets(writer);
   cin>>nob;
 }
void book::putdata()
{
 cout<<"\n\n\n************************* B O O K - D E T A I L S *****************************\n\n\n";

//  cout<<"\nbook name\tpublisher name\t\twriter name\tno of copies availble\n";
 cout<<bno<<"\t"<<name<<"\t\t"<<pub<<"\t\t\t"<<writer<<"\t\t"<<nob<<'\n';
 }

void bookentry()
{ clrscr();
char chh;
ofstream o1("bookshop.dbf",ios::binary|ios::out|ios::app);
if(!o1)
 {cout<<"\n file not open";
  exit(0);
  }
 else
  { cout<<"\n do you want to enter  book details(y/n)";
    cin>>chh;
    if(chh=='y'||chh=='Y')
    {
    cout<<"\n enter book code\tbook name\tpunlisher name\t writer name\tenter no of copies\n";
    while(chh=='y'||chh=='Y')
     {  bb.getdata();
       o1.write((char*)&bb,sizeof(bb));
      cout<<"\n do you want to enter more book details";
      cin>>chh;
     }
    }
      o1.close();
  }

}
//void main()
//{clrscr();
//bookentry();
//getch();
//}