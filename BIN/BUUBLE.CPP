#include<iostream.h>
#include<conio.h>
void bubble(int a[],int n)
{
  int i,j,temp;
for(i=0;i<n;i++)
{ for(j=0;j<n;j++)
   {  if(a[j]>a[j+1])
      {
	 temp= a[j];
	 a[j]=a[j+1];
	 a[j+1]=a[j];
	}
     }
 }
 cout<<"\n sorted array\n";
  for(i=0;i<n;i++)
    cout<<a[i]<<' ';
  }
 void main()
 {
    clrscr();
    cout<<"\n enter size";
    cin>>s;
    cout<<"\n enter array";
     for(i=0;i<s;i++)
       cin>>a[i];
    bubble(a,s);
     getch();
     }
