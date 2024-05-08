#include<stdio.h>
void main()
{
   char ch[50];
   printf("enter a string : ");
   fgets(ch,50,stdin);// its take string form user
   //printf("string : %s",ch);
   // puts(ch);
   fputs(ch,stdout);// its display string on output screen
}