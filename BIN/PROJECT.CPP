#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<string.h>
#include"bill.h"
void bookentry();
void bookdetail();
void welcome();
void purchase();
void choice();

//******************************************************************************************
//   CLASS BOOK
//*******************************************************************************

class book
{ public:
int bno,nob;
 char name[20];
 char pub[20];
 char writer[20];

 void getdata();
 void putdata();
 char returnname();
 }bb;

//***********************************************************************************
 // book functions
//**********************************************************************************

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
 cout<<bno<<"      "<<name<<"             "<<pub<<"         "<<writer<<"       "<<nob<<'\n';
 }
//************************************************************************************
 // customer class
//***********************************************************************************

class customer
{public:
int cnob; int dd,mm,yy;  int phno;
 char custname[20],bbname[20];
 float price,tpp;
  void gatdata();
  void coutcustm();
  }cc;
//************************************************************************************\
//     customer functios
//************************************************************************************

void customer::gatdata()
{
   cout<<"\n enter date";
   cin>>dd>>mm>>yy;
   cout<<"\n enter cust name\t";
   gets(custname);
   cout<<"|n enter phno";
   cin>>phno;
   cout<<"\n enter name of book";
   gets(bbname);
   cout<<"\n enter no of books purchased";
   cin>>cnob;
    if(cnob>0)
 {  cout<<"\n enter the cost of book";
   cin>>price;
   tpp=cnob*price;
  }
  else
     cout<<"\n thank u";

}

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

/*/void custm()
{
 clrscr();
 ofstream o2("custom.dbf",ios::binary|ios::out|ios::app);
  if(!o2)
  { cout<<"\n custom  file not open";
    exit(0);
    }
   else
    {  cc.gatdata();
      o2.write((char*)&cc,sizeof(cc));
      }
  o2.close();
   } */

//$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$$

void customer::coutcustm()
{
  gotoxy(12,5);
  puts(custname);
  gotoxy(12,7);
  cout<<phno;
  gotoxy(50,4);
  cout<<dd<<"/"<<mm<<"/"<<yy;
  gotoxy(7,11);
  cout<<bbname;
  gotoxy(28,11);
  cout<<cnob;
  gotoxy(38,11);
  cout<<price;
  gotoxy(50,11);
  cout<<tpp;
  }
//************************************************************************************I
//               C H O I C E S      F U N C
//*****************************************************************************************

void choice()
{
 cout<<"\n\n What do you want to do??????\n";
 cout<<"\n1.Enter book details\n2.Visit collection\n3.purchase\n4.Exit\n";
 int ch;
 cin>>ch;
 switch(ch)
 {
  case 1: bookentry();
	  break;
  case 2: bookdetail();  choice();
	 break;
  case 3: purchase();
	  break;
  case 4: cout<<"T H A N K   Y O U    F O R   C O M I N G ";
	      exit(0);
    default: cout<<"Thank you";
   }
}
//********************************************************************************
//              B O O K       E N T R Y
//************************************************************************************

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
     } }
      o1.close();
  }
 choice();
}
//***********************************************************************************************************
//                    S E E   B O O K    D E T A I L S
//****************************************************************************************************************
void bookdetail()
{ clrscr();
 ifstream i1("bookshop.dbf",ios::binary|ios::in);
  if(!i1)
   {cout<<"\n file not open";
    exit(0);
    }
   else
   { char ch;
    cout<<"\n\nwould you like to visit our collections(y/n)\n\n";
    cin>>ch;
    clrscr();
     if(ch=='y'||ch=='Y')
      {  cout<<"\nbkcode\tbook name\tpublisher name\t  writer name   no of copies\n";
	while(!i1.eof())
		{i1.read((char*)&bb,sizeof(bb));
		   bb.putdata();
		}

	 }

     else cout<<"\n\n THANK you";}
 }
//******************************************************************************************
//      W E L C O M E
//**************************************************************************************
void welcome()
{clrscr();
 int i;
  for(i=0;i<63;i++)
    cout<<'*';
  gotoxy(15,4);
  cout<<"        W E L C O M E    T O   ";
  gotoxy(14,6);
  cout<<" H I N D U S T A A N    B O O K    D E P O T ";

 }
//*************************************************************************************
				  //      P U R C H A S E
//***************************************************************************************
void purchase()
{ char bkname[20],bpname[20],bwname[20],a;int found=1,nm,pur=0;
clrscr();
ifstream i1("bookshop.dbf",ios::in|ios::binary);
do{
	cout<<"\n enter the name of book";
	gets(bkname);
	cout<<"\n enter the name of book publisher";
	gets(bpname);
	cout<<"\n enter the name of book writer";
	gets(bwname);
	    i1.seekg(0,ios::beg);
       while(i1.read((char*)&bb,sizeof(bb)))
    {
       if(strcmpi(bb.name,bkname)==0)
	 {if(strcmpi(bb.pub,bpname)==0)
	    { if(strcmpi(bb.writer,bwname)==0)
	       { cout<<"\n enter no of books you want to purchase";
		cin>>nm;
	       bb.nob=bb.nob-nm;
		found=1; pur=1;
		  break;
	       }
	     }
	   }

	else
	   found=0;
     }
  if(!found)
   {cout<<"\n sorry book is not available in the store"; }

    cout<<" \ndo you want to mor books";
     cin>>a;

    }while(a=='y'||a=='Y');

  if(pur)
  { cc.gatdata();
   billing();
   cc.coutcustm();
   }
  else
    cout<<"\n thankyou";

}





