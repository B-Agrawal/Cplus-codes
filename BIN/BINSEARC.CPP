#include<iostream.h>
#include<conio.h>
#include<process.h>
int  binsearch(int a[],int s,int p)
{
  int i,j,mid,beg=0,last=s-1;

while(beg<=last)
 {
  mid=(beg+last)/2;
    if(a[mid]==p)
     { return mid; }
      else
	 { if(a[mid]<p)
	    beg=mid+1;
	     else
	    last=mid-1;  }
   }
  return -1;
}
void main()
{clrscr();
 int i,a[10],p;
 cout<<"\nenter size";
int s; cin>>s;
  for(i=0;i<s;i++)
    cin>>a[i];
  cout<<"\nnetre no to be searched";
   cin>>p;
   int r;
r=binsearch(a,s,p);
cout<<"\n element\t"<<p<<"\tfound at\t "<<r+1<<"\tposition\n";
getch();
}