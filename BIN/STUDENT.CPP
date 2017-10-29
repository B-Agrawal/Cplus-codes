#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
class addr
{
 char name[20],addr[20];
  long phno;
  public:
  void getdata();
  void display();
  long ret();
};
void addr::getdata()
{ cout<<"\n enter name";
  gets(name);
  cout<<"\n enter ph no: ";
  cin>>phno;
  cout<<"\n enter addr";
  gets(addr);
  }
 void addr::display()
 {
   cout<<"\n"<<name<<'\t'<<addr<<'\n';
   }
 long addr::ret()
 {
    return phno;
    }
void main()
{
 clrscr(); int n;
 addr ad;
 cout<<"\n enter choice \n1.append\t2.display\t3.exit\n";
 cin>>n;
do{
   switch(n)
   {
     case 1: {
	      ofstream o1("std.dbf",ios::binary|ios::app|ios::out);
		if(!o1)
		 {cout<<"\n file not open";
		   exit(0);
		   }
		  else
		     { char ch;
			  cin>>ch;
		       while(ch=='y'||ch=='Y')
			 {
			    ad.getdata();
			    o1.write((char*)&ad,sizeof(ad));
			      cout<<"\n wnat(y/n)";
			      cin>>ch;
			      }

			}
		      o1.close();
		   }
		   break;
	    case 2: {
		    ifstream i1("std.dbf",ios::binary|ios::in);
		     if(!i1)
		     { cout<<"\n file not open";
		       exit(0);
		       }
		      else
		       {  long ph;
			cout<<"\n enetr ph no";
			 cin>>ph; int f=1;
			 while(!i1.eof())
			  {
			    i1.read((char*)&ad,sizeof(ad));
			     if(ad.ret()==ph)
			       ad.display(); f=1;
				}
			     if(!f)
			      { cout<<"\n not found";    }

			  }
			i1.close();
		      }
		     break;
	      case 3:exit(0);
	    default:cout<<"\n wrong choice";
	   }
       cout<<"\n enter n\t";cin>>n;
      }while(n!=3);
    getch();
    }
