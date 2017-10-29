#include<iostream.h>
#include<conio.h>
void sort(int a[],int s)
{
  int i,j,tmp;
  for(i=0;i<s;i++)
   {
     for(j=0;j<(s-1)-i;j++)
      {
	if(a[j]>a[j+1])
	 {
	  tmp=a[j];
	   a[j]=a[j+1];
	   a[j+1]=tmp;
	   }
	}
     }
  }
 void main()
 {
  clrscr();
  int a[10];int n;
  cin>>n;
  for(int i=0;i<n;i++)
   cin>>a[i];
   sort(a,n);
   cout<<"\n sorted array\n";
   for(int j=0;j<n;j++)
    cout<<a[j]<<' ';
    getch();
    }
