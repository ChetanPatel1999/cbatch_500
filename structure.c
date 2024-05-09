#include<stdio.h>
#include<string.h>
struct pen
{
  char name[30];
  int price;
  float rating;
};
void main()
{
  struct pen p1,p2,p3;
  strcpy(p1.name,"cello");
  p1.price=5;
  p1.rating=3.4;
  printf("pen info :\n");
  printf("pen name : %s\n",p1.name);
  printf("pen price : %d\n",p1.price);
  printf("pen rating : %.1f\n",p1.rating);
}