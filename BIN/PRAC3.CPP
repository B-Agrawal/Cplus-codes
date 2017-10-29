#include<iostream.h>
#include<conio.h>
void skipeach(int a[][10],int m,int n)
{
  int i,j;
   for(i=0;i<n;i++)
    {
	   if(i%2==0)
	    {
	     j=0;
	     }
	    else
	    {
	     j=1;
	     }
	     while(j<=m-1)
	     {
	      cout<<a[i][j]<<'\t';
	       j+=2;
	     }

       }
       }
     void main()
     {
       clrscr();
	int m,n,a[10][10];
	 cin>>m>>n;
	 for(int i=0;i<m;i++)
	   for(int j=0;j<n;j++)
	     cin>>a[i][j];
	   skipeach(a,m,n);
	   getch();
	   }
