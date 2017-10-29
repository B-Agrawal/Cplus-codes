#include<iostream.h>
#include<conio.h>
void merging(int a[],int b[],int x,int m)

{
 int i,j,k;  int c[20];
      for(i=0,j=x-1,k=0;i<m,j>=0;k++)
       {
	   if(a[i]<b[j])
	     {
		c[k]=a[i];
		i++;
	      }
	  else
	      {
		c[k]=b[j];
		j--;
	      }
       }
  for(i=0;i<m+x;i++)
    {  cout<<c[i]<<' ';
      }
      cout<<endl;
}
void main()
{
 clrscr();
 int i,j,a[10],b[10],m,x;
 cout<<"\n enter size of mat A";
 cin>>m;
 cout<<"\n enter mat A in ascending";
  for(i=0;i<m;i++)
     {cin>>a[i];
       }
 cout<<"\n enter size of mat b in descending";
 cin>>x;
 cout<<"\n enter mat b";
  for(i=0;i<x;i++)
     {cin>>b[i];
       }
  merging(a,b,x,m);
  getch();
  }
