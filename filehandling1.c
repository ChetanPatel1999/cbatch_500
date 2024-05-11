// file handling in c
// create a file using c language
// fopen(),fclose()fuction use
#include<stdio.h>
void main()
{
   FILE *ptr;// create file type pointer
   ptr=fopen("abc.txt","w");//return file type adress
   //close a file
   fclose(ptr);
}