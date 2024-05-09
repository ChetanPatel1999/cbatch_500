#include<stdio.h>
#include<string.h>
void main()
{
    char ch[]="chetan";
    char ch1[]=" patel";
    // strcpy(ch1,ch);// its copy one string into another char. array varaible
   // strcpy(ch1,"ram");
    //int n=strlen(ch);//its return string length
    printf("string : %s\n",ch);
    //strrev(ch);// its reverse string
   // strupr(ch);//its convert string in upercase laters
   // strlwr(ch);//its convert string in lower case
    printf("string : %s",ch1);
    strcat(ch,ch1);// its combine two string
    printf("\nafter combine : %s",ch);

    

}