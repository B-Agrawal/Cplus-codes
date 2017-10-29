#include<stdio.h>
#include<conio.h>
void main()
{
 FILE *fp;  char c;
 fp=fopen("input.txt","w");
 if(fp==NULL)
 {
  printf("\nfile does not exist");
  exit(0);
  }
 while((c=getchar())!=EOF)
 {
   putc(c,fp);
   }
 fclose(fp);
 }