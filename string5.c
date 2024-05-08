#include<stdio.h>
void main()
{
    char ch[50];
    printf("enter a string :");
    //scanf("%s",ch);// single word 
    scanf("%[^\n]s",ch);// its take sentance form user
    printf("string value : %s",ch);
}