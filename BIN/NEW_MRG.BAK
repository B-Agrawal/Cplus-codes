#include<iostream.h>
#include<conio.h>
void merge(int a[],int b[],int sa,int sb)
{
  int j,i,k,c[20];
  int p=sa+sb;
  for(i=0,j=sb-1,k=0;k<p;k++)
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
   cout<<"\n merged array";
   for(i=0;i<p;i++)
     cout<<c[i]<<' ';
  }
void main()
{
 clrscr();
 int x,y,a[10],b[10];
 cout<<"\n ntr x,y";
 cin>>x>>y;
 cout<<"\n ntr array a in asc";
   int i;
 for(i=0;i<x;i++)
  cin>>a[i];
  cout<<"\n ntr array b in desc";
    for(i=0;i<y;i++)
     cin>>b[i];
 merge(a,b,x,y);
 getch();
 }
