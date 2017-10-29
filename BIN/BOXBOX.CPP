#include<iostream.h>
#include<conio.h>
void main()
{  clrscr();
 int i,n,j;
 cout<<"\n enter the number";
 cin>>n;
 if(n>1&&n<25)
 {
 for(i=1;i<=(2*n+1);i++)
 { for(j=1;j<=(2*n+1);j++)
     { if(i==1||j==1||i==(2*n+1)||j==(2*n+1))
     //  if(i==1||j==1||i==(2*n+1)||((i%2)==0&&j<=i)||((j%2)==0&&i<=j))
   //    if(i==0||j==0||i==n||j==n)
      { cout<<"*";   }
       else
       {	cout<<" ";  }
      if(i==n&&j<=n)
	 {cout<<"*";}
      else{if(j==n&&i<=n)
	       cout<<"*"; }
     }
     cout<<endl;
 }
 }
 getch();
 }


