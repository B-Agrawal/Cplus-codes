#include<iostream.h>
#include<conio.h>
void coding(char val[],int ch1,int ch2)
{
     for(int i=0;val[i]!='\0';i++)

	 {
	   if(val[i]>='A'&&val[i]<='z')

	       if(i!=0)
	       { if(val[i-1]=='*')
		 val[i-1]=ch1;
		 }
	    else
	      val[i]=ch2;
	  if(val[i]>='A'&&val[i]<='z')

	      if(i==0)
		{
		  if(val[i-1]=='*')
		  val[i-1]=ch2;
		 }
	       else val[i]=ch1;
	    }
       }
   void main()
   {
    clrscr();
    char mess[]="exam*2011*march";
    coding(mess,'@','#');
    cout<<mess;
    getch();

    }

