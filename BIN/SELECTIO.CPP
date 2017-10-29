#include<iostream.h>
#include<conio.h>
void selet(int arr[],int n)
{ int i,j,k,p,s,tmp;
   for(i=0;i<n;i++)
   { s=a[i];
    p=i;
      for(j=i+1;j<n;j++)
      {
	 if(s>a[j])
	   {
	     s=a[j];
	     p=j;
	     }
	}
