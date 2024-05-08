#include<stdio.h>
void main()
{
  char ch[50];
  printf("enter a string : ");
  gets(ch);//  its take string in input 
  printf("string are :");
  puts(ch);//its display string on output string

  //acess one by one char using null charcter
  int i;
   for(i=0;ch[i]!='\0';i++)//6
    {
        printf("%c\n",ch[i]);
    }
}