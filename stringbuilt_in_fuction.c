#include<stdio.h>
#include<string.h>
void main()
{
    char s1[]="chetan";
    char s2[]="chetan";
    if(strcmp(s1,s2)==0)// its compare string
    {
        printf("string are same ");
    }
    else
    {
         printf("string are different");
    }
}