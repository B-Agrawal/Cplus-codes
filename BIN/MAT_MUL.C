#include<stdio.h>
#include<conio.h>
void main()
{
  int i,m,n,k,l,j,a[5][5],b[5][5],c[5][5];
  clrscr();
  printf("enter the first mat");
  scanf("%d %d",&m,&n);
  for(i=0;i<m;i++)
    {
     for(j=0;j<n;j++)
       {
	 scanf("%d",&a[i][j]);
	 }
       }
    printf("\n\nEnter 2nd mat with size");
    scanf("%d %d",&k,&l);
    for(i=0;i<k;i++)
      {
	for(j=0;j<l;j++)
	   {
	      scanf("%d",&b[i][j]);
	      }
	   }
    for(i=0;i<m;i++)
       for(j=0;j<l;j++)
       {
	 c[i][j]=0;
	 for(k=0;k<n;k++)
	   c[i][j]+=(a[i][k]*b[k][i]);

	 }

    printf("\n\n product\n\n");
    for(i=0;i<m;i++)
     {
      for(j=0;j<l;j++)
	{
	printf("%d",c[i][k]);
	}
       printf("\n");
       }
   getch();
   }


