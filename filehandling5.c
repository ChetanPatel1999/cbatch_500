// fputc()//  to write single char in file
#include<stdio.h>
void main()
{
   FILE *ptr;
   ptr=fopen("aaa.txt","w");
   fputc('A',ptr);
   fclose(ptr); 
}