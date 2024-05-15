// read from file
// fgetc()//  to read one char from file
#include<stdio.h>
void main()
{
   FILE *ptr;
   char ch;
   ptr=fopen("filehandling4.c","r");
   if(ptr==NULL)
   {
    printf("file is not found");
   }
   
   //fseek( ptr, 17, SEEK_SET);// its set pointer at desired position
   while(1)
   {
    ch=fgetc(ptr);
    if(ch==EOF)
    {
        break;
    }
    printf("%c",ch);
   }
    rewind(ptr);// its set pointer at begining
    while(1)
   {
    ch=fgetc(ptr);
    if(ch==EOF)
    {
        break;
    }
    printf("%c",ch);
   }
   fclose(ptr);
}