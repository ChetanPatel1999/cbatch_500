//no return type ,but with argument type fuction
#include<stdio.h>
void add(int a,int b,float c)//a=x,b=y,c=z
{
  float sum;
  sum=a+b+c;
  printf("sum = %.2f\n",sum);
}
void evenodd(int n)// n=y
{
 if(n%2==0)
 {
    printf("%d is even\n",n);
 }
 else{
    printf("%d is odd\n",n);
 }
}
void main()
{
  int x,y;
  float z;
  x=12;
  y=6;
  z=8.67;  
 //add(12,6,9.78);// calling fuction
 //add(x,y,z);
  evenodd(12);
  evenodd(67);
  evenodd(y);
}