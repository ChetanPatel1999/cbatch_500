// read from file
// fscanf()//  to read data from file
#include<stdio.h>
void main()
{
   FILE *ptr;
   char ch[15];
   ptr=fopen("aaa.txt","r");
   while(fscanf(ptr,"%s",ch)!=EOF)//end of file
   {
      printf("%s\n",ch);
   }
   fclose(ptr); 
}