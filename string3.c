#include<stdio.h>
void main()
{
    char ch[]="chetan patel";
    int i;
    // print one by one char using null charcter
    for(i=0;ch[i]!='\0';i++)//6
    {
        printf("%c\n",ch[i]);
    }
}