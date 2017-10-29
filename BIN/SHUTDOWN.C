#include<stdio.h>
#include<stdlib.h>
main()
{
char ch;
printf("\n do u want to shutdown your computer(y/n)\n");
scanf("%c",&ch);
if(ch=='y'||ch=='Y')
system("C:\\WINDOWS\\system32\\shutdown/s");
return 0;
}