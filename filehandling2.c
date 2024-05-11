// file handling in c
// write data in file using c 
// fprintf () fuction use
#include<stdio.h>
void main()
{
   FILE *ptr;
   ptr=fopen("abc.txt","w");
   fprintf(ptr,"hi this is my frist file handlig code\n");
   fprintf(ptr,"this is my second syntax in file");
   fclose(ptr);
}