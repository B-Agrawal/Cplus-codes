#include<iostream.h>
#include<conio.h>
void arraydel(int a[],int &s,int p)
{
   int i,l;
   for(i=0;i<s;i++)
    {
       if(a[i]==p)
	 {
	    a[i]=NULL;
	     l=i;

	   for(int k=l;k<s;k++)
	     a[k]=a[k+1];
	   s--;
	  }


     }
  }


void main()
{
 clrscr();
 int x[10],s,p,i;
 cout<<"\n size";
 cin>>s;
 cout<<"\n arry";
  for(i=0;i<s;i++)
    cin>>x[i];
    cout<<"\n to del";
    cin>>p;
  arraydel(x,s,p);
  for(i=0;i<s;i++)
   cout<<x[i];
   getch();
}
