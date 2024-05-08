#include<stdio.h>
void main()
{
    char ch[]="chetan";
    int i,v=0,c=0;
    // print one by one char using null charcter
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]=='a' || ch[i]=='e' || ch[i]=='i' || ch[i]=='o' ||ch[i]=='u')
        {
           v++; 
        }
        else{
            c++;
        }
    }
    printf("total vovel  in string = %d\n",v);
    printf("total consonant  in string = %d\n",c);
}