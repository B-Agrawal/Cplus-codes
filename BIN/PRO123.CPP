#include<fstream.h>
#include<conio.h>
#include<process.h>
class book
{int bno,nob;
 char name[20];
 char pub[20];
 char writer[20];
 public:
 void putdata();
 }bb;
//************************************************************************************
 // customer class
//***********************************************************************************

void book::putdata()
{
// cout<<"\n\n\n************************* B O O K - D E T A I L S *****************************\n\n\n";

  cout<<"\nbook name\tpublisher name\t\twriter name\tno of copies availble\n";
 cout<<name<<"\t\t"<<pub<<"\t\t\t"<<writer<<"\t\t"<<nob<<'\n';
 }

void main()
{clrscr();
 ifstream o1("bookshop.dbf",ios::binary|ios::in);
  if(!o1)
  {cout<<"\n e!!!!!!!!!!!!!";
   exit(0);
   }
 else
   { while(!o1.eof())
      {o1.read((char*)&bb,sizeof(bb));
       bb.putdata();
       }
       }
    o1.close();
  getch();

  }

