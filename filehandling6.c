// fgets()//  to read data from file
#include<stdio.h>
void main()
{
   FILE *ptr;
   char ch[50];
   ptr=fopen("aaa.txt","r");
   fgets(ch,50,ptr);
   printf("%s",ch);
   fgets(ch,50,ptr);
   printf("%s",ch);
   fclose(ptr); 
}