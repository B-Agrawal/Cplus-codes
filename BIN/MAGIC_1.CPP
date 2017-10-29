#include<iostream.h>
#include<conio.h>
void main()
{clrscr();
int a[3][3],r[3]={0,0,0},c[3]={0,0,0},d1=0,d2=0;
int u,d=0;
cout<<"enter the 3/3 matrix\n";
for(int i=0;i<3;i++)
{for(int j=0;j<3;j++)
 {cout<<"enter the"<<i+1<<"row elements\n";
   cin>>a[i][j];
  }
 cout<<endl;
}

 for(int m=0;m<3;m++)
  {for(int n=0;n<3;n++)
  {r[m]+=a[m][n];
   c[m]+=a[n][m];
   if(m==n)
   {d1+=a[m][n];
   }
if((m+n)==2)
d2=d2+a[m][n];

}
}
      u=r[0];

   for(int k=0;k<3;k++)
   {cout<<"row"<<k+1<<"  "<<r[k]<<endl;
   cout<<"col"<<k+1<<" "<<c[k]<<endl;
   cout<<"dia1  "<<d1<<endl;
   cout<<"dia2 "<<d2<<endl;
   }
       for(int y=0;y<3;y++)
   {    if((r[y]!=u)||(c[y]!=u))
	  d=1;
   }
	if((d==0)&&(d1==u)&&(d2==u))
   {cout<<"its a magic square\n";
   }
   else
  { cout<<"no its not\n";}
getch();}
