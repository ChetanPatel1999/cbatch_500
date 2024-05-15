// fputs()//  to write data 
#include<stdio.h>
void main()
{
   FILE *ptr;
   ptr=fopen("aaa.txt","w");
   fputs("this contain write using fputs fuction",ptr);
   fclose(ptr); 
}