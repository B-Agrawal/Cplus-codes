#include<stdio.h>
#include<conio.h>
void main()
{
 int a[10],num,pos,i,n;
 clrscr();
 printf("\nenter array");
 scanf("%d",&n);
 for(i=0;i<n;i++)
   scanf("%d",&a[i]);


 printf("\nentr num to insert :");
 scanf("%d",&num);
 printf("\nntr position :" );
     scanf("%d",&pos);

  for(i=n;i>=pos-1;i--)
     {
      a[i]=a[i-1];
      }
   a[pos-1]=num;
   printf("\n");
	  n++;
   for(i=0;i<n;i++)
   printf(" %d",a[i]);
   getch();
   }

