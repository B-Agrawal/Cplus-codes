#include<iostream.h>
#include<conio.h>
#include<limits.h>
void inssort(int ar[],int s)
{
  int i,j,tmp;
 // ar[0]=INT_MIN;
  for(i=1;i<s;i++)
   { tmp=ar[i];
    j=i-1;
    while((tmp<ar[j])&&(j>=0))
     {
       ar[j+1]=ar[j];
       j--;
       }
     ar[j+1]=tmp;

   }
 }
void main()
{
 clrscr();
 int x,a[10];  cout<<"\n enter sinze";

 cin>>x; cout<<"\n ntr array";

 for(int i=0;i<x;i++)
  cin>>a[i];
  inssort(a,x);
   cout<<"\n sorted array is : \n";
     for(i=0;i<x;i++)
      cout<<a[i]<<' ';

  getch();
  }


