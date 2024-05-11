//typedef 
#include<stdio.h>
typedef long long int lli;
typedef double db;
typedef char ch;
struct student_Of10_class
{
 int rno;
 float per;
};
typedef struct student_Of10_class st10;
void main()
{
 st10 s1,s2;   
 int a;
 db d;
 ch c;
 lli b;
 printf("size of int : %d\n",sizeof(a));
 printf("size of double : %d\n",sizeof(d));
 printf("size of char : %d\n",sizeof(c));
 printf("size of long long int : %d\n",sizeof(b));
}