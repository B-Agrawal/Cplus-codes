#include<iostream.h>
#include<conio.h>
#include<stdio.h>
#include<process.h>
#include<fstream.h>
#include<string.h>
#include"bill.h"
#include"bkout.h"
void bookentry();
void bookdetail();
void welcome();
void purchase();
void choice();
int s=11; int ttl=0;
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
 char returnname();
 }bb;

//***********************************************************************************
 // book functions
//**********************************************************************************

void book::getdata()
{
 cout<<"\n enter book code\t";
 cin>>bno;
  cout<<"\n enter book name\t";
   gets(name);
  cout<<"\n enter publisher name\t";
   gets(pub);
 cout<<"\nenter writer name\t";
  gets(writer);
   cout<<"\n enter number of book available\t";
   cin>>nob;
 }


//************************************************************************************
 // customer class
//***********************************************************************************

class customer
{public:
int cnob; int dd,mm,yy;  long phno;
 char custname[20],bbname[20];
 float price,tpp;
  void gatdata();
  void coutcustm();
  void custbook();
  void custbill();
  void couttotal();
  }cc,ct[10];

//************************************************************************************\
//     customer functios
//************************************************************************************

void customer::gatdata()
{                                      //functions to get customer details
   cout<<"\n enter date\t";
   cin>>dd>>mm>>yy;
   cout<<"\n enter cust name\t";
   gets(custname);
   cout<<"\n enter phno\t";
   cin>>phno; }


  void customer::custbook()          //functions to get purchase details
  {
   cout<<"\n enter name of book\t";
   gets(bbname);
   cout<<"\n enter no of books purchased\t";
   cin>>cnob;
    if(cnob>0)
 {  cout<<"\n enter the cost of book\t";
   cin>>price;
   tpp=cnob*price;
   ttl=ttl+tpp;
  }
  else
     cout<<"\n thank u";

}


void customer::coutcustm()
{
  gotoxy(12,5);                        //function to put details on bill
  puts(custname);
  gotoxy(12,7);
  cout<<phno;
  gotoxy(50,4);
  cout<<dd<<"/"<<mm<<"/"<<yy;
 }


void customer::custbill()            //function to put
					//  purchase detial on bill
 { gotoxy(7,s);
  cout<<bbname;
  gotoxy(28,s);
  cout<<cnob;
  gotoxy(38,s);
  cout<<price;
  gotoxy(50,s);
  cout<<tpp;
  }
 void customer::couttotal()
 { gotoxy(52,22);                     //function to count total of bill
  cout<<ttl;
  }

//************************************************************************************I
//               C H O I C E    F U N C  T I O N
//*****************************************************************************************

void choice()
{
 cout<<"\n\n What do you want to do??????\n";
 cout<<"\n1.Enter book details\n2.Visit collection\n3.purchase\n4.Exit\n\t";
 int ch;
 cin>>ch;
 switch(ch)
 {
  case 1: bookentry();
	  break;
  case 2: bookdetail();clrscr();  choice();
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
  { cout<<"\n do you want to enter  book details(y/n)\t";
    cin>>chh;
    if(chh=='y'||chh=='Y')
    {
    while(chh=='y'||chh=='Y')
     {  bb.getdata();
       o1.write((char*)&bb,sizeof(bb));
      cout<<"\n do you want to enter more book details\t";
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
   { char ch;  int a=3;
    cout<<"\n\nwould you like to visit our collections(y/n)\n\n\t";
    cin>>ch;
    clrscr();
     if(ch=='y'||ch=='Y')
     {	outout();
	gotoxy(2,1);cout<<"BK CODE";gotoxy(16,1);cout<<"NAME";
	gotoxy(31,1);cout<<"PUBLISHER";gotoxy(46,1);cout<<"WRITER";
	gotoxy(61,1);cout<<"NO.OF BOOK";
	while(i1.read((char*)&bb,sizeof(bb)))
		{  gotoxy(2,a);
		   cout<<bb.bno;
		   gotoxy(16,a);
		   cout<<bb.name;
		   gotoxy(31,a);
		   cout<<bb.pub;
		   gotoxy(46,a);
		   cout<<bb.writer;
		   gotoxy(61,a);
		   cout<<bb.nob;
		   a++;
		}
	    getch();
	 }

     else cout<<"\n\n THANK you";}
 }
//******************************************************************************************
//      W E L C O M E  SCREEN F U N C T I O N
//**************************************************************************************
void welcome()
{clrscr();
 int i;
  for(i=0;i<75;i++)
    cout<<'*';
  gotoxy(15,4);
  cout<<"        W E L C O M E    T O   ";
  gotoxy(14,6);
  cout<<" H I N D U S T A A N    B O O K    D E P O T ";

 }
//***************************************************************************
//      P U R C H A S E   F U N C T I O N
//***************************************************************************
void purchase()
{ char bkname[20],bpname[20],bwname[20],a;int found=1,nm,pur=0;
clrscr();
ifstream i1("bookshop.dbf",ios::in|ios::binary);
do{
	cout<<"\n enter the name of book\t : ";
	gets(bkname);
	cout<<"\n enter the name of book publisher\t :  ";
	gets(bpname);
	cout<<"\n enter the name of book writer\t :  ";
	gets(bwname);
	    i1.seekg(0,ios::beg);
       while(!i1.eof())
       {          i1.read((char*)&bb,sizeof(bb));
	 if(strcmpi(bb.name,bkname)==0)
	 {if(strcmpi(bb.pub,bpname)==0)
	    { if(strcmpi(bb.writer,bwname)==0)
	       { cout<<"\n enter no of books you want to purchase\t : ";
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
   {cout<<"\n sorry book is not available in the store\t"; }

    cout<<" \ndo you want to mor books\t";
     cin>>a;

    }while(a=='y'||a=='Y');
  clrscr();
  if(pur)
  { cc.gatdata();
   cout<<"\n enter no of book types you have purchased\t : ";
    int l;
    cin>>l;
  for(int h=0;h<l;h++)
   {
    ct[h].custbook();
    }
   billing();
   cc.coutcustm();
   for(int m=0;m<l;m++)
   { ct[m].custbill();
     s++;
     }
    cc.couttotal();
   }
  else
    cout<<"\n thankyou\t";

}





