#include<iostream.h>
#include<conio.h>
struct country
{ char cname[25];
 char ccap[25];
}ct;

 void main()
 { int n=0;
   ofstream o1("cap.dbf",ios::out|ios::binary);
   if(!o1)
   { cout<<"\n file not open";
    exit(0);
    }
  else
    {  while(n<5)
       {  gets(ct.cname);
	  gets(ct.ccap);
	   o1.write((char*)ct,sizeof(ct));
	}
     }
  o1.close();
  ifstream i1("cap.dbf",ios::in|ios::binary);
  char cont[20];
  cout<<"\n enter country name";
  gets(cont);
  while(!i1)
 {
  if(

   }

