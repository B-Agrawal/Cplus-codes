#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int m,f=0;
int a[10];
cout<<"\n enter the  size of array ";
cin>>m;
cout<<"\n enter the array ";
 for(int i=0;i<m;i++)
  cin>>a[i];
 for(i=0;i<m;i++)
      {
	 if(a[i]<a[i+1])
	    f=1;
	 else
	    f=0;
	 }
 if(f)
 cout<<"\n array sorted";



 getch();
}

