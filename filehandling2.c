// file handling in c
// write data in file using c 
// fprintf () fuction use
#include<stdio.h>
void main()
{
   FILE *ptr;
   ptr=fopen("aaa.txt","a");// append mode
   fprintf(ptr,"hi this is my frist file handlig code\n");
   fprintf(ptr,"this is my second syntax in file\n");
   fprintf(ptr,"this is my third line\n");
   fclose(ptr);
}