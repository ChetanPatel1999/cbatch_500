#include<stdio.h>
void fun()
{
    static  i=1;// runs this stmnt only once time in a program
    printf("lets play a game \n");
    i++;
    if(i<=5)
    {
        fun();//recursive calling 
    }
}
void main()
{
   fun();
}