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
  printf("enter pen info :\n");
  printf("enter pen name : ");
  scanf("%s",p1.name);
  printf("enter pen price : ");
  scanf("%d",&p1.price);
  printf("enter pen rating : ");
  scanf("%f",&p1.rating);
  printf("pen info :\n");
  printf("pen name : %s\n",p1.name);
  printf("pen price : %d\n",p1.price);
  printf("pen rating : %.1f\n",p1.rating);
}